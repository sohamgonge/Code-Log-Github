package conditonal;
import java.util.Scanner;

public class Perfect_number {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your number : ");
        int num = sc.nextInt();
        int sum = 0;
        for(int i = 1; i < num ; i++) {
        	if(num%i == 0) {
        		sum +=i;
        	}
        }
        if(sum == num) {
        	System.out.println("It is a Perfect Number");
        }
        else {
        	System.out.println("It is not a Perfect Number");
        }
        sc.close();
	}
}
