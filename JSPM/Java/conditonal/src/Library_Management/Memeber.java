package Library_Management;

public class Memeber extends Books{
//	Attributes: memberId, name, borrowedBooks[]
//	Methods: borrowBook(Book b), returnBook(Book b)
	int memberId = 0;
	String name = "Unknown";
	int booksBorrowed = 0;
	int borrowedBooks[]= {0,0,0,0,0}; // contains isbn for borrowed books
	
	public int Search(int isbn) {
		for(int i = 0 ; i < 5; i++) {
			if(isbn == borrowedBooks[i]) {
				return i;
			}
		}
		return -1;
	}
	public void borrowBook(Books b){
		int borrowed = Search(b.id);
		if(borrowed == -1 && booksBorrowed <4 && (b.isAvailable)){
			booksBorrowed++;
			borrowedBooks[booksBorrowed] = b.id;
			b.borrowBook();
			System.out.println("Book Finally Borrowed !");
		}
		else if(borrowed!=-1) {
			System.out.println("You have already borrowed this book");
		}
		else if(booksBorrowed>=4) {
			System.out.println("You have already borrowed 5 books Max Limit Reached");
		}
		else {
			System.out.println("Book Currently Not Available!");
		}
	}
	public 

}
