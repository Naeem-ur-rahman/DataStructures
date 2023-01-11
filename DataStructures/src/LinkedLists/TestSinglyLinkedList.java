/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package LinkedLists;
import LinkedLists.SinglyLinkedList;
import java.util.Scanner;
/**
 *
 * @author Naeem ur Rahman
 */
public class TestSinglyLinkedList {
    public static void main(String []argu){
        Scanner i = new Scanner(System.in);
        SinglyLinkedList s = new SinglyLinkedList();
        int c;
         for(;;){
             System.out.println("1.EXIT");
             System.out.println("2.DISPLAY");
             System.out.println("3.INSERT AT FIRST");
             System.out.println("4.INSERT AT LAST");
             System.out.println("5.DELETE AT FIRST");
             System.out.println("6.DELETE AT LAST");
             System.out.print("Enter the Choice : ");
             c = i.nextInt();
             switch(c){
                 case 1:{
                     return;
                 }
                 case 2:{
                     s.display();
                     break;
                 }
                 case 3:{
                     s.insertAtFirst();
                     break;
                 }
                 case 4:{
                     s.insertAtLast();
                     break;
                 }
                 case 5:{
                     s.deleteAtFirst();
                     break;
                 }
                 case 6:{
                     s.deleteAtLast();
                     break;
                 }
                 default : {
                     System.out.println("Wrong Input !");
                 }
             }
         }
        
        
    }
}
