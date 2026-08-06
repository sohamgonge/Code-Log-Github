package Library_Management;

public class Member{
//	Attributes: memberId, name, borrowedBooks[]
//	Methods: borrowBook(Book b), returnBook(Book b)
	int memberId = 0;
	String name = "Unknown";
	int booksBorrowed = 0;
	int[] borrowedBooks = new int[0]; // contains isbn for borrowed books
	
	Member(int memberId, String name, int booksBorrowed, int maxallowed) {
		this.memberId = memberId;
		this.name = name;
		this.booksBorrowed = booksBorrowed;
		this.borrowedBooks = new int[maxallowed];
	}
	
	
	public void borrowBook(Books b, int isbn){
	    if (booksBorrowed < borrowedBooks.length) {  // bounds check
	        borrowedBooks[booksBorrowed] = isbn;
	        booksBorrowed++;
	    } else {
	        System.out.println("Cannot borrow more books, limit reached.");
	    }
	}
	public void returnBook(Books b) {
	    if (booksBorrowed > 0) {
	        booksBorrowed--;
	        borrowedBooks[booksBorrowed] = -1;
	    }
	}

}
