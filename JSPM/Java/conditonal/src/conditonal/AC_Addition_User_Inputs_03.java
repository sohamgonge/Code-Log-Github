package conditonal;
import java.util.Scanner;

public class AC_Addition_User_Inputs_03 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your number : ");
        int num = sc.nextInt();
        System.out.println("Enter your another number : ");
        int num1 = sc.nextInt();
        System.out.println("Your numbers Addition : ");
        System.out.print(num+num1);
	}
}
