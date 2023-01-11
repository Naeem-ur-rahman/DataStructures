/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package StackLinkedList;

import LinkedLists.SinglyLinkedList;
import java.util.Scanner;

/**
 *
 * @author Naeem ur Rahman
 */
public class StackLinkedListTest {
    public static void main(String argu[]){
        Scanner i = new Scanner(System.in);
        StackLinkedList s = new StackLinkedList();
        int c;
         for(;;){
             System.out.println("1.EXIT");
             System.out.println("2.DISPLAY");
             System.out.println("3.PUSH");
             System.out.println("4.POP");
             System.out.println("5.PEAK");
             System.out.println("6.REVERSE");
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
                     s.push();
                     break;
                 }
                 case 4:{
                     s.pop();
                     break;
                 }
                 case 5:{
                     s.peak();
                     break;
                 }
                 case 6:{
                     s.reverse();
                     break;
                 }
                 default : {
                     System.out.println("Wrong Input !");
                 }
             }
         }
        
        
    }
}
