package packageone;

public class AcessModifier {
    public static class Dumy{
        private int a=99;
        protected char ch='A';
        protected  void fun(Dumy x){
            System.out.println(x.a);
        }
    }
    public static void main(String [] args){
        Dumy d1=new Dumy();
        //Dumy.fun(d1);
        student.students s1=new student.students();//acess protected var from other class
        s1.st(33,"nayra");
        s1.gt();
    }
}