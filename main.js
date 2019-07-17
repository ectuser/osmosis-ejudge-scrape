console.log("Hello world!");
const osmosis = require('osmosis');
var list = []
var needLink
// var fun = await console.log(needLink)
(async () => {
    await getUrlToLogIn();
    console.log(needLink)
    await logIn()
})()

async function logIn(){
    return await
    osmosis
        .get(needLink)
        .find('.form-horizontal')
        .set('form')
        .log(console.log)
        .data((data)=>{
            console.log(data)
        })
}

async function getUrlToLogIn(){
    return await
    osmosis
        .get('https://ejudge.kreosoft.ru/') 
        // .find('.nav.navbar-nav.navbar-right')
        .find('li a.menu__link')
        .set({
            'link' : '@href'
        })
        .data((data)=>{
            // console.log(data)
            list.push(data)
        })
        .log(console.log)
        .done((data)=>{
            console.log(list)
            needLink = list[6].link
        })
}

// osmosis
//     .get('http://apps.shopify.com/categories/sales')
//     .find('.resourcescontent ul.app-card-grid')
//     .follow('li a[href]')
//     .find('.resourcescontent')
//     .set({
//         'appname': '.app-header__details h1',
//         'email': '#AppInfo table tbody tr:nth-child(2) td > a'
//         })
//     .log(console.log)   // включить логи
//     .data(console.log)