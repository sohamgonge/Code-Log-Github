function nice(name) {
    console.log("Hey " + name + " you are nice!");
    console.log("Hey " + name + " you are good!");
    console.log("Hey " + name + " your tshirt is good!");
    console.log("Hey " + name + " your course is good too!");

}
nice("Harry");

nice("Rohan");
function sum(a, b, c = 4) {
    console.log(a + b);
    return a + b + c;
}
result = sum(2, 5);
result1 = sum(2, 5, 1);
console.log("The sum of these numbers is: ", result);
console.log("The sum of these numbers is: ", result1);

console.log("Hey Soham you are nice!");
console.log("Hey Soham you are good!");
console.log("Hey Soham your tshirt is good!");
console.log("Hey Soham your course is good too!");

const func1 = (x)=> {
    console.log("This is a function", x);
}
func1(32);
func1(55);
func1(78);