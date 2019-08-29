const puppeteer = require('puppeteer');
const fs = require('fs');
(async () => {
    let results = []
    try{
        const browser = await puppeteer.launch({headless: false});
        const page = await browser.newPage();
        await page.goto('https://accounts.tsu.ru/Account/Login2/?applicationId=1015');

        await page.$eval('#Email', el => el.value = 'm.ectuser@gmail.com');
        await page.$eval('#Password', el => el.value = 'iwantsomethingjustlikethis');
        await page.$eval('.btn.btn-success', el => el.click());

        await page.goto('https://ejudge.kreosoft.ru/user/results');
        let trs = await page.$$('table[border="1"] > tbody > tr');
        console.log(trs.length);
        
        for (let i = 1; i < trs.length; i++){
            await console.log(i, "we are here")
            let tr = await trs[i]
            let tds = await tr.$$('td')
            await console.log(tds.length)
            let tdName = await tds[1];
            let tdLinkToCodesPage = await tds[2];
            // console.log(td)
            try{
                const name = await tdName.$eval('a', e => e.innerText);
                await console.log(name)
                let link = await tdLinkToCodesPage.$eval('a', e => e.href);
                // console.log(link)

                let values = await getCode(page, link);
                console.log(values);

                let code = await values[0];
                await console.log(code)
                await console.log(values[1]);

                let fileExtension = await whichLanguage(values[1]);
                let fileRoute = await "tmp/" + name + fileExtension;
                await console.log(fileRoute);
                await fs.writeFileSync(fileRoute, code)

                await page.goto('https://ejudge.kreosoft.ru/user/results');
                trs = await page.$$('table[border="1"] > tbody > tr');
    
            }catch(e){
                // console.log(e)
            }
        }
        await console.log("That's all!");



    } 
    catch(err){
        console.log(err);
    }
})();

async function getCode(page, url){
    await page.goto(url);
    let trs = await page.$$('body > div > div > div > table > tbody > tr');
    for (tr of trs){
        let tds = await this.tr.$$('td');
        await console.log(tds.length);
        // let language = await tds[1];
        // let languageText = await this.page.evaluate(el => el.innerText, language);
        let tdVerdict = await tds[3]
        let tdLinkToCode = await tds[5]
        try {
            let verdict = await tdVerdict.$eval('span', e => e.innerText);
            if (verdict === 'Accepted'){
                let linkToCode = await tdLinkToCode.$eval('a', e => e.href);
                await console.log(linkToCode)

                let language = await tr.$eval("td:nth-child(2)", e => e.innerText);

                await page.goto(linkToCode)

                let code = await page.$eval('code', e => e.innerText);
                return await [code, language];
            }


        } catch (error) {
            // console.log(error)
            // return await ["no data", "no data"];
        }
    }
    return await ["no data", "no data"];

}

async function whichLanguage(language){
    if (language.indexOf("C++") !== -1){
        return await ".cpp";
    }
    else if (language === "C#"){
        return await ".cs";
    }
    else if (language.indexOf('Python') !== -1){
        return await ".py";
    }
    else if (language.indexOf('Pascal') !== -1){
        return await ".pas";
    }
    else if (language.indexOf('Java') !== -1){
        return await ".java";
    }
    else if (language.indexOf("Ruby") !== -1){
        return await ".rb";
    }
    else {
        return await ".txt"
    }
}