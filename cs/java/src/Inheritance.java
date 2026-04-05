class person{
     private String name;
     private int age;
     public void set(String n,int a){
         name=n;
         age=a;
     }
     public void get() {
         System.out.println("name = "+name);
         System.out.println("age = "+age);
     }
}
class male extends person{
    String sex;
    void setSex(String s){
        sex=s;
    }
    void getsex(){
        System.out.println("sex = "+sex);
    }
}
public class Inheritance {
    public static void main(String [] args){
        male m1=new male();
        m1.set("joe done",18);
        m1.setSex("male");
        m1.get();
        m1.getsex();
    }
}
