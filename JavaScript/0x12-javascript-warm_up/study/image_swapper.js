//1. Program using DOM and API to alternate the display of two images

// Select the img tag reference
const myImg = document.querySelector("img");

// Add an onclick event to the tag target reference
// onclick event property was assigned to anonymous function
myImg.onclick = () => {
    // retrieves target's source
    const source = myImg.getAttribute("src");
    // equality test of target's source
    if (source === "images/image1.jpg"){
        myImg.setAttribute("src", "images/image2.jpg");
    }else{
        myImg = setAttribute("src", "images/image1.jpg");
    }
}