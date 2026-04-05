import java.util.Scanner;

public class Solutions {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char[] str = new char[s.length()]; // Use s.length() instead of s.length
        for (int i = 0; i < s.length(); i++) {
            str[i] = s.charAt(i); // Use charAt() to access characters of the string
        }
        int n = str.length; // Define n as the length of the array
        // Bubble sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) { // Corrected the loop limit
                if (str[j] > str[j + 1]) {
                    // Swap characters
                    char temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;
                }
            }
        }

        // Printing the sorted string
        System.out.print("Sorted string: ");
        for (char c : str) {
            System.out.print(c);
        }
        sc.close();
    }
}
