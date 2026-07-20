package conditonal;
import java.util.Scanner;

public class Armstrong {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your number : ");
        int num = sc.nextInt();
        int tot_digi = 0;
        int originalnum = num;
        int digit = 0;
        int sum = 0;
        while(num>0) {
        	tot_digi++;
        	num/=10;
        }
        num = originalnum;
        while(num>0) {
        	digit = num%10;
//        	System.out.println("digit : " + digit);
        	sum += Math.pow(digit, tot_digi);
//        	System.out.println("Sum : " + sum);
        	num/=10;
        }
        if (originalnum == sum) {
        	System.out.println("It is an Amstrong number");
        }
        else {
        	System.out.println("It is not an Amstrong number");
        }
        sc.close();
	}
}
