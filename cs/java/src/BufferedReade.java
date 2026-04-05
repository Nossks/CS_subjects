import java.io.FileReader;
import java.io.IOException;
import java.io.BufferedReader;

public class BufferedReade {
    public static void main(String [] args)throws IOException{
        BufferedReader bf=new BufferedReader(new FileReader("./file.txt"));
//        int ch;
//        while((ch=bf.read())!=-1){
//            System.out.print((char)ch);
//        }

//        String s;
//        while((s=bf.readLine())!=null)
//            System.out.println(s);


        char ch[]=new char[33];
        bf.read(ch,4,29);
        for(int i=0;i<ch.length;i++){
            System.out.print(ch[i]);
        }
        bf.close();

    }
}
