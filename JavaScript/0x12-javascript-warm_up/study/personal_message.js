// Adding a personalized welcome message

// select elements tag
const myButton = document.querySelector("button");
const myHeading = document.querySelector("h1");

// Function receiving users input username and stores it in browsers cache for later usage
function setUser(){
    const myName = prompt("Please enter your name:");
    // ctest against empty input or null values
    if (!myName){
        setUser();
    }else{
        // Input is stored in localStorage as a data item

        localStorage.setItem("name", myName);
        myHeading.textContent = `Welcome ${myName}`;
    }
}

// test to check if inputted value (username) has bis a new entry, or has been stored already.
if (!localStorage.getItem("name")){
    setUser();
}else{
    const storedUser = localStorage.getItem("name");
    myHeading.textContent = `Welcome ${storedUser}`;
}

myButton.onclick = () => {
    setUser();
}