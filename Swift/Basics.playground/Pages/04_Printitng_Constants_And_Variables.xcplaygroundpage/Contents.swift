var friendlyWelcome = "Hello!"
friendlyWelcome = "Bonjour!"

print(friendlyWelcome)

print("Hello", "World")// prints "Hello World"
print("Hello", "World", separator: "-")// prints "Hello World" seprator joins two values with -
print("Hello", terminator: "") // prints hello without any line break
print("Hello") // just to show that the line break wasn't added in the above statement

// **   String Interpolation    **
// Inserts the value of any expression into a string

print("The current value of friendlyWelcome is \(friendlyWelcome)")
print("2 + 2 = \(2+2)")

// **   Semicolon   **
let cat = "😸"; print(cat)
//Semicolons may or may not be used but when writing two statements in a single line semicolons are required to seperate the statements.
