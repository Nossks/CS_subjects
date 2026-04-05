public class Abstract {
    public static void main(String args[]){
        female m1 = new female();
        m1.set("give me that vovo");
        m1.get();

    }
}
abstract class species {
    String name;
    abstract void set(String v );
}
class female extends species {
    void set(String c) {
        name = c;
    }
    void get(){
        System.out.print(name);
    }
}
