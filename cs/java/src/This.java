
class cube{
  int a;
  public void set(int a){
      this.a=a;//refer to caller object;;
      System.out.println("done");
  }
};
public class This {
    public static void main(String args[]){
        cube c=new cube();
        c.set(99);
    }
}
