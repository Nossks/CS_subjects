import javax.swing.*;

public class swing extends JFrame{
    swing(){

    }
    swing(String s){
        super(s);
    }
    public static void main(String [] args){
        swing obj=new swing("JAVA    GUI");
        obj.setSize(500,500);
        obj.setVisible(true);
        obj.setDefaultCloseOperation(swing.EXIT_ON_CLOSE);


        // JFrame obj=new JFrame("java gui");
        // obj.setSize(600,600);
        // obj.setVisible(true);
        // obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
