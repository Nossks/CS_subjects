import java.util.Scanner;
public class Input {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        int age=sc.nextInt();
        long phone=sc.nextLong();
        System.out.print("name = "+str+"\nage = "+age+"\nphonr no = "+phone);
        sc.close();
    }
}
