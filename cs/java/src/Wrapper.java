public class Wrapper {
        public static void main(String [] args){
            //string to wrapper
            String s="12";
            Integer i1=Integer.valueOf(s);
            Integer i2=Integer.valueOf("12");
            i1=13;
            System.out.println(i1*i2);


            //string to primitive
            int c1=Integer.parseInt("2");
            c1=1;
            System.out.println(c1);
            char ch="a".charAt(0);
            System.out.println(ch);


            //wrapper to primitive
            int no=i1;  //i1.intValue();
            System.out.println(no);
            Character c=ch;
            System.out.println(c);


            //primitive to wrapper
            int zz=99;
            Integer ii=zz;
            System.out.println(ii);
        }
}
