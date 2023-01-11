/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package QueueLinkedList;
import java.util.Scanner;
/**
 *
 * @author Naeem ur Rahman
 */
public class QueueLinkedListTest {
    
    public static void main(String[] args) {
        Scanner i  = new Scanner(System.in);
        QueueLinkedList queue = new QueueLinkedList();
        int choice = 0 ;
        for (;;) {
            
            
            System.out.println("1.EXIT");
            System.out.println("2.ENQUEUE");
            System.out.println("3.DEQUEUE");
            System.out.println("4.DISPLAY");
            System.out.println("5.SIZE");
            System.out.print("Enter  your Choice : ");
            choice = i.nextInt();
            switch (choice) {
                case 1: {
                    System.exit(0);
                    break;
                }
                case 2: {
                    queue.enqueue();
                    break;
                }
                case 3: {
                    queue.dequeue();
                    break;
                }
                case 4:{
                    queue.display();
                    break;
                }
                case 5:{
                    System.out.println("No of Nodes are : "+queue.count());
                    break;
                }
                default: {
                    System.out.println("Invalid INPUT !");
                }
            }
        }

    }
}
