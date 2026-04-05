import javax.swing.*;
public class SwingEg extends JFrame{
    JLabel l1,l2,l3,l4;
    JButton b1;
    JTextField t1,t2;
    SwingEg(){}
    SwingEg(String str){
        super(str);
    }
    public void setComponents(){
        l1=new JLabel("Addition of two number");
        l2=new JLabel("enter first number");
        l3=new JLabel("enter second number");
        l4=new JLabel();
        b1=new JButton("ADD");
        t1=new JTextField();
        t2=new JTextField();
        //setLayout(null);

        l1.setBounds(50, 20, 200, 30);
        l2.setBounds(50, 70, 150, 30);
        t1.setBounds(200, 70, 100, 30);
        l3.setBounds(50, 120, 150, 30);
        t2.setBounds(200, 120, 100, 30);
        b1.setBounds(50, 170, 100, 30);
        l4.setBounds(50, 220, 250, 30);
        add(l1);
        add(l2);
        add(t1);
        add(l3);
        add(t2);
        add(b1);
        add(l4);
    }
    public static void main(String [] args){
        SwingEg jf=new SwingEg("  ADD ");
        jf.setComponents();
        jf.setSize(500,500);
        jf.setVisible(true);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
