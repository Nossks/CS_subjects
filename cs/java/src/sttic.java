class iota{
    int a=88;
    static int b;
    public void fun0(){
        a=1;
        //b=99;
    }
    static void fun1(){
        b=2;
    }
    public void show(){
        System.out.println(a);
        System.out.println(b);
    }
    static class cl{
        static int x=33;
    }
}
public class sttic{
    public static void main(String []args)
    {
        iota i0=new iota();
        i0.fun0();
        iota.fun1();
        i0.show();
        System.out.println(iota.cl.x);
    }
}
