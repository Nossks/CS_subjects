import java.util.Scanner;
public class Array2d {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String [][] arr=new String[2][];
        arr[0]=new String [5];
        arr[1]=new String [7];
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                arr[i][j]=sc.next();
            }
        }
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                System.out.print(arr[i][j]);
            }
        }
        sc.close();
    }
}
