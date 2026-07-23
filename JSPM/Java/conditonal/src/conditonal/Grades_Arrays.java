package conditonal;
import java.util.Scanner;
public class Grades_Arrays {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Let's Calculate your Grade and Percentage !");
		System.out.print("Enter your name : ");
		String name = sc.nextLine();
//		System.out.println(name);
		int total = 0;
		System.out.print("Enter total number of Subjects :");
		int subjects = sc.nextInt();
		int[] marks= new int[subjects];
		System.out.printf("\n");
		for(int i = 0; i < subjects; i++) {
			System.out.print("Marks Obtained in subject "+ (i+1)+" : ");
			marks[i] = sc.nextInt();
			total += marks[i];
		}
		System.out.println("\nTotal Marks Obtained : " + total + "/"+(subjects*100));
		double per = total/subjects;
		System.out.printf("Percentage : %.2f\n",per);
		if(per>90) {
			System.out.println("Grade : O");
		}
		else if(per>80) {
			System.out.println("Grade : A+");	
		}
		else if(per>70) {
			System.out.println("Grade : A");	
		}
		else if(per>60) {
			System.out.println("Grade : B+");	
		}
		else if(per>50) {
			System.out.println("Grade : B");	
		}
		else if(per>40) {
			System.out.println("Grade : C");	
		}
		else {
			System.out.println("Oh ho! You have Failed!!!");
		}
		
	}
}
