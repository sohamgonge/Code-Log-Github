// Use let to declare a constant
let maximumNumberOfLoginAttempts = 10

//Use var to declare a variable
var currentLoginAttempt = 0

//We can declare the value of a constant or a variable later as long as it has a value assigned before its first time its read

var enviroment = "development"

// we can set which variable is allowed by specifing using : after the variable name else let the swift language infer it automatically
let maximumNumberOfAttempts : Int
//maximumNumberOfAttempts has no value yet.

if enviroment == "development"{
    maximumNumberOfAttempts = 100
}
else{
    maximumNumberOfAttempts = 10
}
//Now maximumNumberOfAttempts has a value, and can be read.

/// Multiple constants and variables can be declared on a single line seprated by  ", " commas.
