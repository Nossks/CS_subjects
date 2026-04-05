import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.IOException;
public class BufferedWrite {
    public static void main(String args[])throws IOException{
        BufferedWriter out=new BufferedWriter(new FileWriter("./file.txt",true));
        out.write("aryan");
        out.close();
    }
}
