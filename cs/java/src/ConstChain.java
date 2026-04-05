public class ConstChain {
    public static void main(String args[]){
        //F o=new F();
    }
}
class E{
    E(int a){
        System.out.println("e1");
    }
}
class F extends E{
    F(){
        this(66);
        System.out.println("f1");
    }
    F(int f){
        super(f);
        System.out.println("f2");
    }
}
