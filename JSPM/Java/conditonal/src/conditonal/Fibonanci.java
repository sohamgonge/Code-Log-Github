package conditonal;
import java.util.Scanner;

public class Fibonanci {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your range : ");
        int num = sc.nextInt();
        int prev_num = 0;
        int num1 = 1;
        int new_num = 0;
        int i = 1;
        while(i <= num) {
        	if(i == 1) {
        		System.out.print(" " + prev_num);
        	}
        	else if(i == 2) {
        		System.out.print(" " + num1);
        	}
        	else {
        		new_num = prev_num + num1;
        		System.out.print(" " + new_num);
        		prev_num = num1;
        		num1 = new_num;
        	}
        	i++;
        }
        
	}
}
