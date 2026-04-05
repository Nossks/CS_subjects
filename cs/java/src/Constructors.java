class box{
    private int l,b,h;
    box(){
        l=1;
        b=1;
        h=1;
    }
    box(int a,int x,int c){
       l=a;b=x;h=c;
    }
    void set(){
        System.out.print(l+" ");
        System.out.print(b+" ");
        System.out.println(h);
    }
}


public class Constructors {
    static public void main(String []args){
        box b1=new box();
        b1.set();
        box b2=new box(10,101,110);
        b2.set();
    }
}
