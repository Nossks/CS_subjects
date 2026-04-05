package packageone;
public class student {
    public static class students {
        protected int rollno=16;
        private String name;
        public void st(int x, String y) {
            rollno = x;
            name = y;
        }
        public void special (){
            AcessModifier.Dumy d1=new AcessModifier.Dumy();
            System.out.println(d1.ch);
        }
        public void gt() {
            System.out.println("roll no = " + rollno);
            System.out.println("name = " + name);
        }
    }
    public static void main(String[] args) {
        students s1=new students();
        System.out.println(s1.rollno);
        //s1.special();
    }
}
