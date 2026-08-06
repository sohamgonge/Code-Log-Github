package Bank;
import Customers.Users;

public class Administrator{
//	Withdraw, Deposit, UpdateBal
	protected void withdraw(int amt, Users us) {
		if(amt > us.balance || amt<0) {
			System.out.println("Enter amount within your Balance");
		}
		else {
			us.balance-=amt;
			System.out.println("Updated Your Balance\nNew Balance : " + us.balance);
		}
	}
	protected void deposit(int amt, Users us) {
		if(amt<0) {
			System.out.println("Enter amount greater than 0");
		}
		else {
			us.balance+=amt;
			System.out.println("Updated Your Balance\nNew Balance : " + us.balance);
		}
	}
}
