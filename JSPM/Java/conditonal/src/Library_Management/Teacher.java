package Library_Management;

public class Teacher extends Member {
	int maxallowed = 10;
	Teacher(int memberId, String name, int booksBorrowed) {
		this(memberId, name, booksBorrowed, 5); // delegates to the constructor below
	}

	Teacher(int memberId, String name, int booksBorrowed, int maxallowed) {
			super(memberId, name, booksBorrowed, 5);
		}
}
