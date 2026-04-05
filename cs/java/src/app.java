import java.awt.*;
import javax.swing.*;

class SmileyCanvas extends Canvas {
    public void paint(Graphics g) {
        // Draw face outline
        g.setColor(Color.YELLOW);
        g.fillOval(50, 50, 300, 300);
        
        // Draw eyes
        g.setColor(Color.BLACK);
        g.fillOval(120, 130, 40, 40); // Left eye
        g.fillOval(240, 130, 40, 40); // Right eye
        
        // Draw mouth
        g.setColor(Color.RED);
        g.drawArc(120, 200, 160, 80, 0, -180);
    }
}

public class app {
    public static void main(String[] args) {
        // Create a new frame
        JFrame frame = new JFrame("Smiley Face");
        
        // Set the size of the frame
        frame.setSize(400, 400);
        
        // Specify what happens when the close button is clicked
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        // Create an instance of the SmileyCanvas class
        SmileyCanvas smiley = new SmileyCanvas();
        
        // Set the background color
        smiley.setBackground(Color.WHITE);
        
        // Add the SmileyCanvas to the frame
        frame.add(smiley);
        
        // Set the frame visibility to true
        frame.setVisible(true);
    }
}
