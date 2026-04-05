public class nodefault {
    public static void main(String args[]){
        int balance = 3000;
        int withdrawal = 20000;
        try {
            if(balance < withdrawal) {
                throw new InsufficientFundsException("Insufficient balance for withdrawal");
            }
            System.out.println("Withdrawal successful");
        }
        catch(InsufficientFundsException e) {
            System.out.println("Exception: " + e.getMessage());
        }
        finally {
            System.out.println("Continue");
        }
    }
}
class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String message) {
        super(message);
    }
}
