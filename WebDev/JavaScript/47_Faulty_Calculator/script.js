// Create a fautly Calclator using javascript this faulty calculator works following
// It takes two numbers as uinput from the user 
//  It performs wrong operations a follows
/*
+ -----> -
* -----> +
- -----> /
/ -----> **
*/

let random = Math.random();
let a = prompt ("Enter first number");
let b = prompt ("Enter Second number");
let c = prompt ("Enter Third number");

let obj ={
    "+": "-",
    "*": "+",
    "-": "/",
    "/": "**",
}

if (random>0.1){
    // Perform correct operation
    alert(`The result is ${eval(`${a} ${c} ${b}`)}`);
    
    
}

else {
    // Perform faulty operation
    c=obj[c];
    alert(`The result is ${eval(`${a} ${c} ${b}`)}`);
}