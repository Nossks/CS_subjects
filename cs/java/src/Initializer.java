class X{
    private int x;
    private static int y;
    {
        System.out.println("initializer "+x);
        x=3;y++;
    }
    static{
        System.out.println(6);
    }
    static {
        System.out.println("static "+y);
        y+=1;
    }
    X(){
        System.out.println("x "+x);
        System.out.println("y "+y);
    }
}
public class Initializer {
    public static  void main(String args[]){
        // X o1=new X();
        // X o2=new X();   //static run only one time
    }
}
