package Library_Management;


public class Books {
		int id = 0;
		int total_copies = 0;
		int borrowed_copies = 0;
		String title = "Unknown";
		String author = "Unkown";
		boolean isAvailable = true;
Books(int id, String title, String author, boolean isAvailable){
	this.id = id;
	this.title = title;
	this.author = author;
	this.isAvailable = isAvailable;
}
public int Search(int isbn, int borrowedBooks[]) {
	for(int i = 0 ; i < 5; i++) {
		if(isbn == borrowedBooks[i]) {
			return i;
		}
	}
	return -1;
}
public void displayInfo() {
		System.out.println("ISBN No: " + id);
		System.out.println("Title : " + title);
		System.out.println("Author : "+ author);
		System.out.println("IsAvailable : " + isAvailable);
	}
public void borrowBook() {
	borrowed_copies++;
	if(borrowed_copies==total_copies) {
		isAvailable = false;
	}
	System.out.println("Book borrowed Sucessfully !");
}
public void returnBook(){
	isAvailable = true;
	borrowed_copies--;
	System.out.println("Book returned Sucessfully !");
}
}
