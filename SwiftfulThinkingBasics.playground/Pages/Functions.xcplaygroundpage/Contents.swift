import Foundation


func myFirstFunction(){
    print("My First Function Called")
    mySecondFunction()
    myThirdFunction()
}

func mySecondFunction(){
    print("My Second Function Called")
}

func myThirdFunction(){
    print("My Third Function Called")
}

func getUserName() -> String {
    let username = "Nick"
    print(username)
    return username
}

let name: String = getUserName()
print("Name :",name)
myFirstFunction()

 
// -----------------------------------------------------------------

showFirstScreen()

func showFirstScreen(){
    var userDidCompleteOnboarding: Bool = false
    var userProfileIsCreated: Bool = true
    let status = checkUserStatus(didCompleteOnboarding: userDidCompleteOnboarding, profileIsCreated: userProfileIsCreated)
    
    if status == true{
        print("SHOW HOME SCREEN")
    }
    else{
        print("SHOW ONBOARDING SCREEN")
    }
}

func checkUserStatus(didCompleteOnboarding: Bool, profileIsCreated: Bool) -> Bool {
    if (didCompleteOnboarding && profileIsCreated) {
        return true
    } else{
        return false
    }
}
