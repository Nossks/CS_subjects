public class consInherit {
    public static void main(String args[]){
        //d obj=new d();
    }
}
class c{
    c(int c){
        System.out.println("c constructor");
    }
}
class d extends c{
    d(){
        super(99);
        System.out.println("d constructor");
    }
}