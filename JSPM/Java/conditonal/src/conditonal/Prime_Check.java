package conditonal;
import java.util.Scanner;

public class Prime_Check {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter your number : ");
        int num = sc.nextInt();
        boolean isPrime = true;
        if (num <=1 ) {
        	isPrime = false;
        }
        else if( num == 2) {
        	isPrime = true;
        }
        else {
        	
        	for(int i = 2; i < num ; i++) {
        		if(num%i == 0) {
        			isPrime = false;
        			break;
        		}
        	}
        }
        if(isPrime) {
        	System.out.println("It is a prime number");
        }
        else {
        	System.out.println("It is not a prime number");
        }
	}
}
