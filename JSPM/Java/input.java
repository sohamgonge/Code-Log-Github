import java.util.Scanner;
public class input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your number : ");
        int num = sc.nextInt();
        System.out.println("Your number : ");
        System.out.println(num);
        sc.close();
    }
}
