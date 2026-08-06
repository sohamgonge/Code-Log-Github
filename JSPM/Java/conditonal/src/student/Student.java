package student;

public class Student {
	// Data Members
	private int Roll_no = 0;
	private String Name = "Unkown";
	private String Department = "Unkown";
	
	//Constructor
	Student(int Roll_no, String Name, String Department) {
		this.Roll_no = Roll_no;
		this.Name = Name;
		this.Department = Department;
	}
	
	//Getters
	public int get_Roll_no() {
		return Roll_no;
	}
	public String get_Name() {
		return Name;
	}
	public String get_Department() {
		return Department;
	}
	
	// Display function
	public void display() {
		System.out.println("Student Details --> ");
		System.out.println("Name : " + Name);
		System.out.println("Roll No : " + Roll_no);
		System.out.println("Department : " + Department);
		System.out.println("\n");
	}
}
