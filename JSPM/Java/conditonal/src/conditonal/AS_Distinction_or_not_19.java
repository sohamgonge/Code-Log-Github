package conditonal;

public class AS_Distinction_or_not_19 {
	public static void main(String[] args) {
		int marks = 60;
		if(marks> 33) {
			if(marks>=60) {
				System.out.println("You have passed with Distinction");
			}
			else {
				System.out.println("You have passed");
			}
		}
		else {
			System.out.println("You have failed");
		}
	}
}
