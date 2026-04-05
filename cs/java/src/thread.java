public class thread {
    public static void main(String args[]){
        Thread t1=new Thread(new Aaa());
        Thread t2=new Thread(new Bbb());
        t1.start();
        //t1.fun();
        t2.start();
        new ccc().fun();
    }
}
class Aaa implements Runnable{
    void fun(){

    }
    public void run() {
        for(int i=0;i<5;i++){
            System.out.println("threaed A"+i);
        }
    }
}
class Bbb implements Runnable{
    public void run() {
        for(int i=0;i<5;i++){
            System.out.println("threaed B"+i);
        }
    }
}
class ccc{
    public void fun() {
        for(int i=0;i<5;i++){
            System.out.println("threaed c"+i);
        }
    }
}
