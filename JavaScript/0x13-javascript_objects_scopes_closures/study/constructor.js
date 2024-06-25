// The below function returns an object that contains two members
// one a property and the other a method
function a(name){
    const obj = {};

    obj.name = name;
    obj.introduction = function () {
        console.log(`Hello, I am ${this.name}`);
    }

    return obj;
}