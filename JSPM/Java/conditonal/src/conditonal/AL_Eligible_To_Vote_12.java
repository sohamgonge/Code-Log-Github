package conditonal;
import java.util.Scanner;

public class AL_Eligible_To_Vote_12 {
	static public void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your number : ");
        int age = sc.nextInt();
        if(age>=18) {
        	System.out.println("You are Eligible to vote.");
        }
        else {
        	System.out.println("You are not Eligible to vote");
        }
        sc.close();
	}
}
