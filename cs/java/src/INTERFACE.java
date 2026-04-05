public class INTERFACE {
    public static void main(String args[]){
        i1 obj=new zyx();
        //zyx obj=new zyx();
        obj.fun1();
        //obj.fun2();   //error due to object is of type intreface so can call only function of interface1 only i.e i1
        //obj.fun3();   //same as above
    }
}
interface i1{
    int a=0;
    void fun1();
}
interface i2{
    void fun2();
}
class zyx implements i1,i2{
     public void fun1(){
        System.out.println("interface 1");
    }
    public void fun2(){
        System.out.println("inetrface 2");
    }
    void fun3(){
        System.out.println("class a");
    }
}
