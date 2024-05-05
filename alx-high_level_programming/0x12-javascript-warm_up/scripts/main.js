const myImg  = document.querySelector("img");
let myHeader = document.querySelector("h1");;
let myButton = document.querySelector("button")

myImg.onclick = () => {
    const mySrc = myImg.getAttribute("src");
    if (mySrc === "images/distributed web infrastructure.png") {
        myImg.setAttribute("src", "images/Screenshot (88).png")
    } else {
        myImg.setAttribute("src", "images/distributed web infrastructure.png")
    }
}

function setUsername() {
    const myName = prompt("Enter your username");
    localStorage.setItem("name", myName);
    myHeader.textContent = `ME is amazing, ${myName}`;
}

const person = {
    name: ['Egbuuniwe', 'Emmanuel'],
    bro: {
        /* If you do this, you'll also need to go through your method code and change any instances of bro[0] and bro[1] */
        first: 'Paul',
        last: 'Egbuniwe',
    },
    age: 10,
    bio() {
        console.log(`${this.name[0]} ${this.name[1]} and I am ${this.age} years old`)
    },
    greeting() {
        console.log(`Hi, you can call me ${this.name[1]}`)
    }
};

function logProperty(propertyName){
    console.log(person[propertyName]);
}

logProperty("name");
logProperty("age");

/* Class body
    The part of a class in curly braces {}. The body of a class is executed in strict mode even if "use stric" is not used

    A class element an be characterized by 3 aspects
    * Kind: Getter, setter, method or field
    * Location: Static or instance
    * Visibility: Private or public
*/

function checkData() {
    if (document.form1.threeChar.value.length === 3) {
        return true;
    } else {
        alert(`Input exactly 3 characters. ${document.form1.threeChar.value} is not valid`);
        return false
    }
}

const fruitTypes = ("Apple", "Mango");
switch (fruitTypes) {
    case "Banana":
        console.log('The price of banana is $2');
        break;
    case "Mango":
        console.log('The price of mango is $1.5');
        break;
    case "Orange":
        console.log('The price of  is orange $1.5');
    break;
    default:
        console.log(`Out of stock: ${fruitTypes}`)
        break;
}


function getMyMonth(mo) {
    mo--;
    const months = [
        "Jan", "Feb", "March", "April", "May", "Jun",
        "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"
    ]

    if (months[mo]) {
        return months[mo];
    }else {
        throw new Error('InvalidMonthno')
    }
}

try {
    monthName = getMyMonth(myMonth);
} catch (e) {
    monthName = "unknown";
    logMyErrors(e); /* // pass exception object to error handler (i.e. your own function) */
}
/*  When logging errors to the console inside a catch block, using console.error() rather than console.log() is advised for debugging. */