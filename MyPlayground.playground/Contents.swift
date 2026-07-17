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
var numbers = [20, 19, 7 ,12]
numbers.map({ (number: Int) -> Int in
    let result = 3 * number
    return result
})

