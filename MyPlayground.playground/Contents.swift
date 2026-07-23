//print("Hello World")
//
//// Pattern 1: type + value together (Swift infers the type)
////let x = 10
//
//// Pattern 2: type annotation now, value later
//let x: Int
//x = 10  // assigned later, works fine
//
//
////let x        // ❌ no type, no value
////x = 10       // Swift has no idea what type x even is
//var implicitIntegar = 70
//var implicitDouble = 70.0
////let explicitDouble = 70
////    will Store the explicitDouble as Int
//let explicitDouble: Double = 70
////    will Store the explicitDouble as Double
//let explicitFloat = 4
//
//let label = "The width is "
//let width = 94
////let widthLabel = label + width
//let widthLabel = label + String(width)  // "The width is 94"
//
//let apples = 3
//let oranges = 5
//let appleSummary = "I have \(apples) apples."
//let fruitSummary = "I have \(apples + oranges) pieces of fruit."
//print(appleSummary)
//print(fruitSummary)
//
//let name = "Soham"
//let greeting = "Good morning, \(name)!"
//// "Good morning, Soham!"
//print(greeting)
//
//let result = "The answer is \(3.14 * 2.0)"
//// "The answer is 6.28"
//
//
//let quotation = """
//        Even though there's whitespace to the left,
//        the actual lines aren't indented.
//            Except for this line.
//        Double quotes (") can appear without being escaped.
//
//        I still have \(apples + oranges) pieces of fruit.
//        """
//print(quotation)
//
//var fruits = ["strawberries", "limes", "tangerines"]
//fruits[1] = "grapes"
//
//
//var occupations = [
//    "Malcolm": "Captain",
//    "Kaylee": "Mechanic",
// ]
//occupations["Jayne"] = "Public Relations"
//
//fruits.append("blueberries")
//print(fruits)
//// Prints "["strawberries", "grapes", "tangerines", "blueberries"]".
//
//fruits = []
//occupations = [:]
//
//let emptyArray: [String] = []
//let emptyDictionary: [String: Float] = [:]
//
//let individualScores = [75, 43, 103, 87, 12]
//var teamScore = 0
//for score in individualScores {
//    if score > 50 {
//        teamScore += 3
//    } else {
//        teamScore += 1
//    }
//}
//print(teamScore)
//// Prints "11".
//
//
//let scoreDecoration = if teamScore > 10 {
//    "🎉"
//} else {
//    ""
//}
//print("Score:", teamScore, scoreDecoration)
//// Prints "Score: 11 🎉".
//
//let vegetable = "red pepper"
//switch vegetable {
//case "celery":
//    print("Add some raisins and make ants on a log.")
//case "cucumber", "watercress":
//    print("That would make a good tea sandwich.")
//case let x where x.hasSuffix("pepper"):
//    print("Is it a spicy \(x)?")
//default:
//    print("Everything tastes good in soup.")
//}

//let interestingNumbers = [
//    "Prime": [2, 3, 5, 7, 11, 13],
//    "Fibonacci": [1, 1, 2, 3, 5, 8],
//    "Square": [1, 4, 9, 16, 25],
//]
//var largest = 0
//
//// Similar logic
////for (pair, numbers) in interestingNumbers {
////     print(pair)   // → "Prime", "Fibonacci", etc.
////     for number in numbers// [2, 3, 5, 7, ...]
////    {
////         print(number)
////     }
////}
//
//for (_, numbers) in interestingNumbers {
//    for number in numbers {
//        if number > largest {
//            largest = number
//        }
//    }
//}
//print(largest)
//// Prints "25".
//
//func greet(person: String, lunch: String) -> String {
//    return "Hello \(person), today special lunch is \(lunch)."
//}
//greet(person: "Bob", lunch: "Pasta")

//func greet(_ person: String, on day: String) -> String {
//    return "Hello \(person), today is \(day)."
//}
//greet("John", on: "Wednesday")

//func calculateStatistics(scores: [Int]) -> (min: Int, max: Int, sum: Int) {
//    var min = scores[0]
//    var max = scores[0]
//    var sum = 0
//
//
//    for score in scores {
//        if score > max {
//            max = score
//        } else if score < min {
//            min = score
//        }
//        sum += score
//    }
//
//
//    return (min, max, sum)
//}
//let statistics = calculateStatistics(scores: [5, 3, 100, 3, 9])
//print(statistics.sum)
//// Prints "120".
//print(statistics.2)
//// Prints "120".

// ***---Nested functions have access to variables that were declared in the outer function---***

//func returnFifteen() -> Int {
//    var y = 10
//    func add() {
//        y += 5
//    }
//    add()
//    return y
//}
//returnFifteen()


// ***---Function can return another function as its value ---***

//func makeIncrementer() -> ((Int) -> Int) {
//    func addOne(number: Int) -> Int {
//        return 1 + number
//    }
//    return addOne
//}
//var increment = makeIncrementer()
//increment(7)

// ***---A function can take another function as one of its arguments---***

//func hasAnyMatches(list: [Int], condition: (Int) -> Bool) -> Bool {
//    for item in list {
//        if condition(item) {
//            return true
//        }
//    }
//    return false
//}
//func lessThanTen(number: Int) -> Bool {
//    return number < 10
//}
//var numbers = [20, 19, 7, 12]
//hasAnyMatches(list: numbers, condition: lessThanTen)
//var numbers = [20, 19, 7 ,12]
//numbers.map({ (number: Int) -> Int in
//    let result = 3 * number
//    return result
//})
//var numbers = [20, 19, 7 ,12]
//numbers.map({ (number: Int) -> Int in
//    if((number % 2) != 0){
//        return 0
//    }
//    let result = 3 * number
//    return result
//})
//class Shape {
//    var numberOfSides = 4
//    let internalAngle = 90;
//    func simpleDescription() -> String {
//        return "A shape with \(numberOfSides) sides."
//    }
//    func internalGeo(sides : Int) -> Int{
//        return (360/sides)
//    }
//}
//var shape = Shape()
//shape.numberOfSides = 7
//var shapeDescription = shape.simpleDescription()
//
//class NamedShape {
//    var numberOfSides: Int = 0
//    var name: String
//
//
//    init(name: String) {
//       self.name = name
//    }
//
//
//    func simpleDescription() -> String {
//       return "A shape with \(numberOfSides) sides."
//    }
//}
//class Square: NamedShape {
//    var sideLength: Double
//
//
//    init(sideLength: Double, name: String) {
//        self.sideLength = sideLength
//        super.init(name: name)
//        numberOfSides = 4
//    }
//
//
//    func area() -> Double {
//        return sideLength * sideLength
//    }
//
//
//    override func simpleDescription() -> String {
//        return "A square with sides of length \(sideLength)."
//    }
//}
//let test = Square(sideLength: 5.2, name: "my test square")
//test.area()
//test.simpleDescription()
//
//class Circle: NamedShape{
//    var radius: Double
//    
//    init(radius: Double, name : String) {
//        self.radius = radius
//        super.init(name: name)
//        numberOfSides = 0
//    }
//    func area() -> Double {
//        return 3.14*radius*radius
//    }
//    override func simpleDescription() -> String {
//        return "A circle with radius of length \(radius)"
//    }
//}
//let cirlceTest = Circle(radius : 7,name : "apple")
//cirlceTest.area()
//cirlceTest.simpleDescription()
//
//class EquilatteralTriangle: NamedShape{
//    var sideLength: Double = 0.0
//    
//    init(sideLength: Double, name: String){
//        self.sideLength = sideLength
//        super.init(name: name)
//        numberOfSides = 3
//    }
//    
//    var perimeter: Double {
//        get {
//            return 3.0 * sideLength
//        }
//        set {
//            sideLength = newValue / 3.0
//        }
//    }
//    
//    override func simpleDescription() -> String {
//        return "An equilateral triangle with sides of length \(sideLength)."
//    }
//}
//
//var triangle = EquilatteralTriangle(sideLength: 3.1, name: "a triangle")
//
//print(triangle.perimeter)
//// prints "9.3.
//triangle.perimeter = 9.9
//print(triangle.sideLength)
//// Prints "3.3000000000000003"
//
//class TriangleAndSquare{
//    var triangle: EquilatteralTriangle{
//        willSet{
//            square.sideLength = newValue.sideLength
//        }
//    }
//    var square: Square{
//        willSet{
//            triangle.sideLength = newValue.sideLength
//        }
//    }
//    init(size: Double, name: String){
//        square = Square(sideLength: size, name: name)
//        triangle = EquilatteralTriangle(sideLength: size, name: name)
//    }
//}
//
//var triangleAndSquare = TriangleAndSquare(size: 10 , name: "another test shape")
//print(triangleAndSquare.square.sideLength)
////Prints "10.0".
//print(triangleAndSquare.triangle.sideLength)
////Prints "10.0".
//triangleAndSquare.square = Square(sideLength: 50, name: "larger Square")
//print(triangleAndSquare.triangle.sideLength)
//
//let optionalSquare: Square? = Square(sideLength : 2.5, name: "optional square")
//let sideLength = optionalSquare?.sideLength

enum Rank: Int {
    case ace = 1
    case two, three, four, five, six, seven, eight, nine, ten
    case jack, queen, king


    func simpleDescription() -> String {
        switch self {
        case .ace:
            return "ace"
        case .jack:
            return "jack"
        case .queen:
            return "queen"
        case .king:
            return "king"
        default:
            return String(self.rawValue)
        }
    }
}
let ace = Rank.ace
let aceRawValue = ace.rawValue

if let convertedRank = Rank(rawValue: 3) {
    let threeDescription = convertedRank.simpleDescription()
}

enum Suit{
    case spades, hearts, diamonds, clubs
    func simpleDescription() -> String{
        switch self {
        case .spades:
            return "spades"
        
        case .hearts:
            return "hearts"
        
        case .diamonds:
            return "diamonds"
        
        case .clubs:
            return "clubs"
        }
    }
    func color() -> String {
        switch self {
        case .clubs, .spades:
            return "black"
        case .hearts, .diamonds:
            return "red"
        }
    }
}
//
//let hearts = Suit.hearts
//let heartsDescription = hearts.simpleDescription()


//enum ServerResponse{
//    case result(String, String)
//    case failure(String)
//    case happy(String)
//}
//
//let success = ServerResponse.result("6:00 am", "8:09")
//let moresuccess = ServerResponse.result("happy", "birthday")
//let failure = ServerResponse.failure("Out of cheese.")
//let happy = ServerResponse.happy("Server is happy")
//
//switch success{
//case let .result(sunrise, sunset):
//    print("Sunrise is at \(sunrise), and Sunset at \(sunset).")
//case let .failure(message):
//    print("Failure...\(message).")
//case let .happy(mhappy):
//    print("Happy \(mhappy)")
//}
//switch failure {
//case let .result(sunrise, sunset):
//    print("Sunrise is at \(sunrise), and Sunset at \(sunset).")
//case let .failure(message):
//    print("Failure...\(message).")
//case let .happy(mhappy):
//    print("Happy \(mhappy)")
//}

struct Card{
    var rank : Rank
    var suit : Suit
    func simpleDescription() -> String{
        return "The \(rank.simpleDescription()) of \(suit.simpleDescription())"
    }
}
