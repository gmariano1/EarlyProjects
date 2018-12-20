package projeto3;

import java.awt.event.ActionListener;
import javafx.scene.paint.Color;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

/**
 *
 * @author gmari
 */
public class Projeto3 extends JFrame{
    public Projeto3() {
        JPanel painel = new JPanel();
        painel.setVisible(true);
        JButton botao = new JButton("Ok");
        botao.setVisible(true);
        painel.add(botao); 
     
    }
   
}
