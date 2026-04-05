public class stringfunc {
    public static void main(String args[]){
        String s1="aryan";
        String s2="Aryan";
        s1=s1.toUpperCase();
        System.out.println(s1);


        int i=s1.indexOf('a');
        System.out.println(i);
        int j=s2.indexOf('y',2);
        System.out.println(j);


        System.out.println(s2.indexOf("yan"));
        System.out.println(s2.indexOf("an"));

        String s3=s1.substring(0,3);
        System.out.println(s3);


        System.out.println(s1.equalsIgnoreCase(s2));
        System.out.println(s1.compareTo(s2));
    }
}
