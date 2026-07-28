package Library_Management;


public class Books {
		int id = 0;
		String title = "Unknown";
		String author = "Unkown";
		boolean isAvailable = true;
public void displayInfo() {
		System.out.println("ISBN No: " + id);
		System.out.println("Title : " + title);
		System.out.println("Author : "+ author);
		System.out.println("IsAvailable : " + isAvailable);
	}
public void borrowBook() {
	isAvailable = false;
	System.out.println("Book borrowed Sucessfully !");
}
public void returnBook(){
	isAvailable = true;
	System.out.println("Book returned Sucessfully !");
}
}
