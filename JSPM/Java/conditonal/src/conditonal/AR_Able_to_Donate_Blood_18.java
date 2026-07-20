package conditonal;

public class AR_Able_to_Donate_Blood_18 {
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
