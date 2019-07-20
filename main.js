const puppeteer = require('puppeteer');
(async () => {
    var results = []
    try{
        const browser = await puppeteer.launch({headless: false});
        const page = await browser.newPage();
        await page.goto('https://accounts.tsu.ru/Account/Login2/?applicationId=1015');

        await page.$eval('#Email', el => el.value = 'm.ectuser@gmail.com');
        await page.$eval('#Password', el => el.value = 'iwantsomethingjustlikethis');
        await page.$eval('.btn.btn-success', el => el.click());

        await page.goto('https://ejudge.kreosoft.ru/user/results');
        var trs = await page.$$('table[border="1"] > tbody > tr');
        // console.log(td)
        // try{
        //     const name = await tdName.$eval('a', e => e.innerText);
        //     console.log(name)
        //     var link = await tdLinkToCodesPage.$eval('a', e => e.href);
        //     console.log(link)
        //     var code = await getCode(page, link)

        //     await page.goBack();
        //     await page.goBack();


        // }catch(e){
        //     console.log(e)
        // }

        for (tr of trs){
            await page.waitForNavigation();
            var tds = await tr.$$('td')
            await console.log(tds.length)
            var tdName = await tds[1];
            var tdLinkToCodesPage = await tds[2];
            // console.log(td)
            try{
                const name = await tdName.$eval('a', e => e.innerText);
                await console.log(name)
                var link = await tdLinkToCodesPage.$eval('a', e => e.href);
                // console.log(link)
                var code = await getCode(page, link)
                await console.log(code)
                
                // results.push({
                //     name: name,
                // })

                await page.goBack();
                await page.goBack();
    
    
            }catch(e){
                // console.log(e)
            }
        }



    } catch(err){
        console.log(err);
    }
})();

async function getCode(page, url){
    await page.goto(url);
    var trs = await page.$$('body > div > div > div > table > tbody > tr');
    for (tr of trs){
        var tds = await tr.$$('td')
        await console.log(tds.length)
        var tdVerdict = await tds[3]
        var tdLinkToCode = await tds[5]
        try {
            var verdict = await tdVerdict.$eval('span', e => e.innerText);
            if (verdict === 'Accepted'){
                var linkToCode = await tdLinkToCode.$eval('a', e => e.href);
                await console.log(linkToCode)
                
                await page.goto(linkToCode)

                var code = await page.$eval('code', e => e.innerText);
                return await code;
            }


        } catch (error) {
            // console.log(error)
        }
    }
    return 'no data'
}