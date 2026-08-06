package Library_Management;

public class Student extends Member {
	int maxallowed = 5;
	Student(int memberId, String name, int booksBorrowed) {
		this(memberId, name, booksBorrowed, 5); // delegates to the constructor below
	}

	Student(int memberId, String name, int booksBorrowed, int maxallowed) {
			super(memberId, name, booksBorrowed, 5);
		}
}
