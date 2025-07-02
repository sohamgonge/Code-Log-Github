console.log("Hello I am conditional operator");

let age = 0;
let grace = 4;

// age += grace;
// console.log(age);
// console.log(age + grace);
// console.log(age - grace);
// console.log(age * grace);
// console.log(age / grace);
// console.log(age ** grace);
// console.log(age % grace);
// age = age ** grace;
// if ((age + grace) >= 18) {
if (age != 18) {
    console.log("You can drive");
}
else if (age == 0) {
    console.log("Are you kidding?");
}
else {
    console.log("You cannot drive");
}

a=6;
b=8;

let c= a>b?(a-b):(b-a);
console.log(c);

// translates to:
// if (a > b) {
//     c = a - b;
// }
// else {
//     c = b - a;
// }