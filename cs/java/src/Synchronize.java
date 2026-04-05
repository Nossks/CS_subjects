import java.util.Scanner;
public class Synchronize {
    public static void main(String [] args){
        Account acc=new Account(6000);
        Customer c1,c2;
        c1=new Customer("aryan",acc);
        c2=new Customer("nayra",acc);
        //c1.start();
        c2.start();
        c1.start();
    }
}
class Account{
    private int amount;
    Account(int money){
        amount=money;
    }
    public boolean check(int amount){
        return (this.amount>=amount?true:false);
    }
    void mainbalance(){
        System.out.println(amount);
    }
    void withdraw(int amount){
        this.amount-=amount;
    }

}
class Customer extends Thread{
    String name;
    Account acc;
    Customer(String name,Account acc){
        this.name=name;
        this.acc=acc;
    }
    public void run(){
        synchronized (acc)
        {
        System.out.println(name+" enter amount to withdrawal");
        Scanner sc=new Scanner(System.in);
        int x= sc.nextInt();
            if (acc.check(x)) {
                acc.withdraw(x);
                System.out.println("amount withdrawal by " + name + " is " + x + " and current is");
                acc.mainbalance();
            } else {
                System.out.println("insufficient balance");
            }
        }
    }
}