/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package QueueArray;
import java.util.Scanner;
/**
 *
 * @author Naeem ur Rahman
 */
public class QueueArrayTest {
    public static void main(String [] args){
        int choice = 0;
        QueueArray queue = new QueueArray();
        Scanner i = new Scanner(System.in);
        for(;;){
        System.out.println("1.Exit");
        System.out.println("2.DISPLAY");
        System.out.println("3.ENQUEUE");
        System.out.println("4.DEQUEUE");
        System.out.print("Enter Choice : ");
        choice = i.nextInt();
        switch(choice){
            case 1:{
                System.exit(0);
                break;
            }
            case 2:{
                queue.queueDisplay();
                break;
            }
            case 3:{
                queue.enqueue();
                break;
            }
            case 4:{
                queue.dequeue();
                break;
            }
            default:{
                System.out.println("Invalid Input ! ");
            }    
        }
        }
    }
}
