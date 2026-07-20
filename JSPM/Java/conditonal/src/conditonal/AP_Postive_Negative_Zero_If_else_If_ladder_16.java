package conditonal;
import java.util.Scanner;

public class AP_Postive_Negative_Zero_If_else_If_ladder_16 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Your Number : ");
		int num = sc.nextInt();
		if(num > 0) {
			System.out.println("Your number is Positive");
		}
		else if(num == 0) {
			System.out.println("Your number is 0");
		}
		else {
			System.out.println("Your number is Negative");
		}
		
		sc.close();
	}
}
