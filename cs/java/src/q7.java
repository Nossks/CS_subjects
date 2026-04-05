
import java.util.*;

class q6 extends Thread {
    String s;

    q6(String s) {
        this.s = s;
    }

    public void run() {
        try {
            for (int i = 0; i < 2; i++) {
                System.out.println(s);
                Thread.sleep(1000);
            }
            for (int j = 0; j < 2; j++) {
                System.out.println(s);
                Thread.sleep(2000);
            }
        } catch (Exception e) {
            System.out.println("Exception Caught");
        }
    }
}

public class q7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s, t;
        System.out.println("Enter First String:");
        s = sc.nextLine();
        q6 obj1 = new q6(s);
        System.out.println("Enter Second String:");
        t = sc.nextLine();
        q6 obj2 = new q6(t);
        System.out.println("\n");
        obj1.start();
        obj2.start();
        sc.close();
    }
}
