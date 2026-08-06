package Bank;
import java.util.Scanner;
import Customers.Users;

public class Main extends Administrator{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Users us = new Users("Soham", 966511166, "gongesoham@gmail.com", 19, 0, 1012);
		int amt = 0;
		boolean enter = true;
		int choice = 1;
		System.out.println("------------------Welcome to YOUR BANK------------------");
		while(enter) {
			System.out.println("Choose and option from menu ->");
			System.out.println("1. Show details");
			System.out.println("2. Withdraw");
			System.out.println("3. Deposit");
			switch (choice) {
			case 1:
				us.display();
			case 2:
				System.out.println("Enter your amt : ");
				amt = sc.nextInt();
				withdraw(amt,us);
			}		
		}
	}
}
