import java.io.File;
import java.io.IOException;

public class FileClass {
    public static void main(String [] args)throws IOException {
        File f1=new File("D:\\cs\\java\\src\\eg1.txt");
        f1.createNewFile();
        System.out.println("is exists "+f1.exists());
        System.out.println("can write "+f1.canWrite());
        System.out.println("get name "+f1.getName());
        System.out.println("get size "+f1.length());
        f1.delete();
    }
}
