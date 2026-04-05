class A{
    public void fun(int x){
        System.out.println("class a");
    }
}
class B extends A{
    public void fun(){
        System.out.println("class b");
    }
}

public class Overload {
    public static void main(String [] args){
        B o=new B ();
        o.fun();
        o.fun(4);
    }
}
