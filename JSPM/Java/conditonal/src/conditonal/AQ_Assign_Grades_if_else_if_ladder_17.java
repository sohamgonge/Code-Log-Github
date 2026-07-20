package conditonal;

public class AQ_Assign_Grades_if_else_if_ladder_17 {
	public static void main(String[] args) {
		int marks = 80;
		if(marks > 90) {
			System.out.println("Your grade is O");
		}
		else if(marks>80) {
			System.out.println("Your grade is A");
		}
		else if(marks>70) {
			System.out.println("Your grade is B");
		}
		else if(marks>60) {
			System.out.println("Your grade is C");
		}
		else if(marks>50) {
			System.out.println("Your grade is D");
		}
		else if(marks>33) {
			System.out.println("Your grade is E");	
		}
		else if(marks>0) {
			System.out.println("You have Failed");
		}
		else {
			System.out.println("Enter valid marks");
		}
	}
}
