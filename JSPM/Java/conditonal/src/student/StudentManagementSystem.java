package student;
//import student.Student;
public class StudentManagementSystem {
	public static void main(String[] args) {
		
		//Creating objects
		Student s1 = new Student(58, "Mohit", "CSBS");
		Student s2 = new Student(66, "Suyash", "CSE");
		
		// Printing details
		s1.display();
		s2.display();
		
		//Accessing using getters
		System.out.println("Accessing s1 using getters ->");
		System.out.println("Name : " + s1.get_Name()); 
		System.out.println("Department : " + s1.get_Department());
		System.out.println("\n");
		
		System.out.println("Accessing s2 using getters ->");
		System.out.println("Name : " + s2.get_Name()); 
		System.out.println("Department : " + s2.get_Department());
		System.out.println("\n");
	}
}
