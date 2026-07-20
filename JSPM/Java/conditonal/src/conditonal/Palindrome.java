package conditonal;
import java.util.Scanner;

public class Palindrome {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter your number : ");
        int num = sc.nextInt();
        int tot_digi = 0;
        int reverse = 0;
        int original_num = num;
        while(num>0) {
        	tot_digi++;
        	num/=10;
        }
//        System.out.println("Tot :" + tot_digi);
        num = original_num;
        int i = 0;
        int raised_to = tot_digi - 1;
        while(i <tot_digi) {
        	int digit = num%10;
        	reverse += digit * Math.pow(10, raised_to);
        	num/=10;
        	raised_to--;
        	i++;
        }
        System.out.println("Original num : " + original_num);
        System.out.println("Reverse num : " + reverse);
        if(reverse == original_num) {
        	System.out.println("It is a palindrome");
        }
        else {
        	System.out.println("It is not a palindrome");
        }
        sc.close();
	}     
}
