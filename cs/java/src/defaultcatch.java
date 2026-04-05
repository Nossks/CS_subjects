public class defaultcatch {
    public static void main(String args[]) {

            int a = 19;
            int b = 0;
            if (b == 0) {
                throw new ArithmeticException("cant divide by zero");
            }
            System.out.println(a/b);
    }
}
