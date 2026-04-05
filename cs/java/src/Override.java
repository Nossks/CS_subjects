class Aa{
    public void fun(){
        System.out.println("class a");
    }
}
class Bb extends Aa{
    public void fun(){
        System.out.println("class b");
    }
}
public class Override {
    public static void main(String args[]){
        Bb o=new Bb();
        o.fun();
    }
}
