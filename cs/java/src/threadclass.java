public class threadclass {
    public static void main(String [] args){
       class1 o1=new class1();
       class2 o2=new class2();
       o1.setPriority(9);
       System.out.println(o1.getPriority());
       //o1.fun();
       o1.start();
       o2.start();
    }
}
class class1 extends Thread{
    void fun(){}
    public void run(){
        for(int i=0;i<33;i++){
            System.out.println("o1 "+i);
        }
    }
}
class class2 extends Thread{
    public void run(){
        for(int i=0;i<33;i++){
            System.out.println("o2 "+i);
        }
    }
}


