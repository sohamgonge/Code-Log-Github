package Customers;

public class Users {
//	Data Members
	private String name;
	private long phone_no;
	private String email;
	private int age;
	public int balance;
	private int account_number;
	
//	Member Functions
	public Users(String pname, long pphone_no, String pemail, int page, int pbalance, int paccount_number){
		name = pname;
		phone_no = pphone_no;
		email = pemail;
		age = page;
		balance = pbalance;
		account_number = paccount_number;
	}
	public void Update_details(String pname, long pphone_no, String pemail, int page, int paccount_number) {
		name = pname;
		phone_no = pphone_no;
		email = pemail;
		age = page;
		account_number = paccount_number;
	}
	public void set_balance(int pbalance) {
		balance = pbalance;
	}
	public void display() {
		System.out.println("----------------Customer Details---------------");
		System.out.println("Acc No : " + account_number);
		System.out.println("Name : " + name);
		System.out.println("Email : " + email);
		System.out.println("Phone : " + phone_no);
		System.out.println("Age : " + age);
		System.out.println("Balance : " + balance);
	}
}
