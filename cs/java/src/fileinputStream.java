import java.io.FileInputStream;
import java.io.IOException;

public class fileinputStream {
    public static void main(String [] args)throws IOException{
        FileInputStream fin=new FileInputStream("./file.txt");
        int i;
        do{
            i=fin.read();
            if(i!=-1) {
                System.out.print((char)i);
            }
        }while(i!=-1);
        fin.close();
    }
}
