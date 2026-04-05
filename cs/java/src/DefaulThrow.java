import java.util.Scanner;

public class DefaulThrow {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter the first number: ");
            int x = sc.nextInt();
            System.out.print("Enter the second number: ");
            int y = sc.nextInt();

            System.out.println("First");
            System.out.println(x / y);
            System.out.println("Second");
        } catch (ArithmeticException e) {
            System.out.println("Exception: " + e.getMessage());
        }
        finally {
            // Close the scanner
            sc.close();
        }
    }
}
