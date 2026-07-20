package conditonal;
import java.util.Scanner;

public class AO_Area_of_Rectangle_15 {
public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.print("Enter your rectangle's length: ");
	int l = sc.nextInt();
	System.out.print("Enter your rectangle's Breadth: ");
	int b = sc.nextInt();
	int area = l*b;
	System.out.println("Your rectangle's area is : " + area);
	sc.close();
}
}
