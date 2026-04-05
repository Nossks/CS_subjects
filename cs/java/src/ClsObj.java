class Bx{
    private int length;int breadth;int height;
    public void set(int b,int h,int l){
        length=l;
        breadth=b;
        height=h;
    }
    public void show(){
        System.out.println("length= "+length);
        System.out.println("breadth= "+breadth);
        System.out.println("height= "+height);
    }
}
public class ClsObj {
    public static void main(String [] args){
        Bx small=new Bx();
        small.set(17,45,78);
        small.show();
    }
}
