// Program using DOM and API to alternate the display of two images

// Select the 
const myImg = document.querySelector("img");

myImg.onclick = () => {
    const source = myImg.getAttribute("src");
    if (source === "images/image1.png"){
        myImg.setAttribute("src", "images/image2.png");
    }else{
        myImg = setAttribute("scr", "images/image1.png");
    }
}