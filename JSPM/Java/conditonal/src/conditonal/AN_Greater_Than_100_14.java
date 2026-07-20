package conditonal;
import java.util.Scanner;

public class AN_Greater_Than_100_14 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int num = sc.nextInt();
		if(num>100) {
			System.out.println("It's greater than 100");
		}
		else {
			System.out.println("It's not greater than 100");
		}
		sc.close();
	}

}
