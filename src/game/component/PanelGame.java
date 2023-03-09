/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package game.component;

import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JComponent;

/**
 *
 * @author AhmedAbdelwahed
 */
public class PanelGame extends JComponent {
    
    private int width;
    private int height;
    private Thread thread;
    private boolean start = true;
    //Game FPS
    private final int FPS = 60;
    private final int TARGET_TIME = 1000000000 / FPS;
    
    
    public void start()
    {
       width = getWidth();
       height = getHeight();
       thread = new Thread(new Runnable() {
           @Override
           public void run() {
               while(start){
                   long startTime=System.nanoTime();
                   drawBackground();
                   drawGame();
                   render();
                   long time = System.nanoTime() - startTime;
                   System.out.println("time : " + time);
                   if(time<TARGET_TIME)
                   {
                       long sleep = (TARGET_TIME - time)/ 1000000;
                       sleep(sleep);
                       System.out.println("sleep : "+sleep);
                   }
                   
               }
           }
       });
    }
    private void drawBackground()
    {
        
    }
    private void drawGame()
    {
    }
    private void render()
    {
        
    }
    private void sleep (long speed)
    {
        try {
            Thread.sleep(speed);
        } catch (InterruptedException ex) {
         System.err.println(ex);
        }
    }
}
