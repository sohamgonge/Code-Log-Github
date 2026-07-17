package conditonal;
import java.util.Scanner;

public class Factorial {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter your number : ");
        int num = sc.nextInt();
        int fac = 1;
        int i = 1;
        while(i <=num) {
        	fac*=i;
        	i++;
        }
        System.out.println("Factorial is : " + fac);
	}
}
