/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package StackLinkedList;

import java.util.Scanner;

/**
 *
 * @author Naeem ur Rahman
 */
public class StackLinkedList {
    Scanner i = new Scanner(System.in);
    node top = null;
    private class node{
    int data;
    node next;
        node(int d){
            this.data = d;
            this.next = null;
        }
    }
    private int value(){
        System.out.print("Enter the Value : ");
        int v = i.nextInt();
        return v;
    }
    public void push(){
        node t = new node(value());
      if(top==null){
          top = t;
      }
      else{
          t.next = top;
          top = t;
      }
    }
    public void display(){
       if(top==null){
           System.out.println("Stack Empty ! ");
       }
       else{
           node t = top;
           while(t!=null){
               System.out.print(t.data+"  ");
               t=t.next;
           }
           System.out.println("");
       }
    }
    public void pop(){
        if(top==null){
            System.out.println("Stack UnderFlow ! ");
        }
        else{
            top=top.next;
        }
    }
    public void peak(){
        if(top==null){
            System.out.println("Stack is Empty ! ");
        }
        else{
            System.out.println("Data at Top is : "+top.data);
        }
    }
    public void reverse(){
        
    }
}
