/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package LinkedLists;

import java.util.Scanner;

/**
 *
 * @author Naeem ur Rahman
 */

public class SinglyLinkedList {

    Scanner i = new Scanner(System.in);
    node start = null;
    node end = null;

    private class node {

        int data;
        node next;

        node(int d) {
            this.data = d;
            this.next = null;
        }
    }

    private int value() {
        System.out.print("Enter the Value : ");
        int v = i.nextInt();
        return v;
    }

    public void insertAtFirst() {

        node t = new node(value());
        if (start == null) {
            start = t;
            end = start;
        } else {
            t.next = start;
            start = t;
        }
    }

    public void insertAtLast() {
        node t = new node(value());
        if (start == null) {
            start = t;
            end = t;
        } else {
            end.next = t;
            end = t;
        }
    }

    public void display() {
        if (start == null) {
            System.out.println("LinkedList is Empty ! ");
        } else {
            node t = start;
            while (t != null) {
                System.out.print(t.data + "  ");
                t = t.next;
            }
            System.out.println("");
        }
    }

    public void deleteAtFirst() {
        if (start == null) {
            System.out.println("LinkedList underFlow !");
        } else {
            start = start.next;
            if (start == null) {
                end = null;
            }
        }
    }

    public void deleteAtLast() {
        if (start == null) {
            System.out.println("LinkedList underFlow !");
        } else {
            node locp = null, t = start;
            while (t.next != null) {
                locp = t;
                t = t.next;
            }
            locp.next = t.next;
        }
    }
}
