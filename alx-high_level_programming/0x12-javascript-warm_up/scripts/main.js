const myImg  = document.querySelector("img");

myImg.onclick = () => {
    const mySrc = myImg.getAttribute("scr");
    if (mySrc === "images/distributed web infrastructure.png") {
        mySrc = myImg.setAttribute("src", "images/Screenshot (88).png")
    } else {
        mySrc = myImg.setAttribute("src", "images/distributed web infrastructure.png")
    }
}