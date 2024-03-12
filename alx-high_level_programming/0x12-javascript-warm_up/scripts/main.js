const myHeader = document.querySelector("h1");
myHeader.textContent = "Hello World";

const clickEvent = document.querySelector("html");
clickEvent.addEventListener("click", () => {
	alert("This is a click event listener")
});

const myImg  = document.querySelector("img");

myImg.onclick = () => {
    const mySrc = myImg.getAttribute("scr");
    if (mySrc === "images/distributed web infrastructure.png") {
        mySrc = myImg.setAttribute("src", "images/Screenshot (88).png")
    } else {
        mySrc = myImg.setAttribute("src", "images/distributed web infrastructure.png")
    }
}