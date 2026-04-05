class ex{
    final int a;
    {
        a=10;
    }
    final static int b;
    static {
        b=99;
    }
    void fun(){
        final int x;
        x=69;
        System.out.println(x);
    }
}

public class Final {
    public static void main(String args[]){
        ex obj=new ex();
        System.out.println(obj.a);
        System.out.println(ex.b);
        obj.fun();
    }
}
