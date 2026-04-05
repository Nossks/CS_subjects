public class Str1 {
    public static void main(String args[]){
    String s1=new String("aryan");
    String s2="aryan";
    String s3=new String("aryan");
    //s3="aryan";
    System.out.println(s1==s2);
    System.out.println(s1.equals(s2));
    System.out.println(s1.equals(s3));
    System.out.println(s1==s3);//only print false if it is pass as constructor
    }
}
