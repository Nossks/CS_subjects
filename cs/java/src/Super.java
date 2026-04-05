class eg{
  int a;
}
class Bs extends eg{
    int a;
    public void fun(){
        int a=69;
        super.a=99;
        System.out.println("eg a= "+super.a);
        this.a=79;
        System.out.println("bs a= "+this.a);
        System.out.println("bs a= "+a);
    }
}
public class Super {
    public static void main(String[] Args){
        Bs obj=new Bs();
        obj.fun();
    }
}
