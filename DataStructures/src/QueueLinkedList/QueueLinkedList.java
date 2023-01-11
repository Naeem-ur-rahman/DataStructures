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
public class QueueLinkedList {

    private Scanner i = new Scanner(System.in);

    private class node {

        int data;
        node next;

        node(int d) {
            this.data = d;
            this.next = null;
        }
    }
    private node rear;
    private node front;

    private int value() {
        int v = 0;
        System.out.print("Enter the Value : ");
        v = i.nextInt();
        return v;
    }

    public void display() {
        if (front == null) {
            System.out.println("Empty Queue !");
        } else {
            node ptr = front;
            while (ptr != null) {
                System.out.print(ptr.data + "   ");
                ptr = ptr.next;
            }
            System.out.println("");
        }
    }

    public void enqueue() {
        if (front == null) {
            front = new node(value());
            rear = front;
        } else {
            node ptr = new node(value());
            rear.next = ptr;
            rear = ptr;
        }
    }

    public void dequeue() {
        if (front == null) {
            System.out.println("UnderFlow Queue LinkedList ! ");
        } else {
            System.out.println("Deleted Data is : "+ front.data);
            front = front.next;
        }
    }
    public int count(){
        int c =0;
        if(front==null){
            return c;
        }
        node ptr = front;
        while(ptr!=null){
            c++;
            ptr=ptr.next;
        }
        return c;
    }
}
