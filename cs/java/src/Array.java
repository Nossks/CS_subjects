import java.util.Scanner;
public class Array {
    public static void main(String [] args){
        int [] arr;
        Scanner sc=new Scanner(System.in);
        arr=new int [3];
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<3;i++){
            System.out.println(arr[i]);
        }
        sc.close();
    }
}
