package Library_Management;

public class Member{
//	Attributes: memberId, name, borrowedBooks[]
//	Methods: borrowBook(Book b), returnBook(Book b)
	int memberId = 0;
	String name = "Unknown";
	int booksBorrowed = 0;
	int borrowedBooks[]= {0,0,0,0,0}; // contains isbn for borrowed books
	
	
	public void borrowBook(Books b,int isbn){
		booksBorrowed++;
		borrowedBooks[booksBorrowed] = isbn;
	}
	public void returnBook(Books b) {
		borrowedBooks[booksBorrowed] = -1;
		booksBorrowed--;
	}

}
