import java.io.FileOutputStream;
import java.io.IOException;

public class fileoutputstream {
    public static void main(String [] args)throws IOException{
        FileOutputStream fout=new FileOutputStream("./file.txt",true);
        String s="3 crore";
        char [] ch=s.toCharArray();
        int n=s.length();
        for(int i=0;i<n;i++){
            fout.write(ch[i]);
        }
        fout.close();
    }
}
