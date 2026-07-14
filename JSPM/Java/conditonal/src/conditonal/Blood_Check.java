package conditonal;

public class Blood_Check {
	public static void main(String[] args) {
		int age = 22;
		int weight = 55;
		if(age>21) {
			if(weight > 50) {
				System.out.println("Person is eligible to donate blood");
			}
			else {
				System.out.println("Person is not eligible to donate blood");				
			}
		}
		else {
			System.out.println("Person is not eligible to donate blood");				
		}
	}
}
