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
public class QueueArray {

    private int size;
    private int[] array;
    private int front;
    private int rear;
    private Scanner i = new Scanner(System.in);

    QueueArray() {
        this.size = 5;
        this.array = new int[size];
        this.front = -1;
        this.rear = -1;
    }

    protected void enqueue() {
        if (front == 0 && rear == size - 1 || front != 0 && rear == front - 1) {
            System.out.println("OverFlow Array !");
        } else if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
            array[rear] = value();
        } else if (front != 0 && rear == size - 1) {
            rear = 0;
            array[rear] = value();
        } else {
            rear++;
            array[rear] = value();
        }
    }

    protected void dequeue() {
        if (front == -1) {
            System.out.println("UnderFlow Queue ! ");
        } else if (front == rear) {
            System.out.println("Deleted Value is : " + array[front]);
            front = -1;
            rear = -1;
        } else if (front == size - 1) {
            System.out.println("Deleted Value is : " + array[front]);
            front = 0;
        } else {
            System.out.println("Deleted Value is : " + array[front]);
            front++;
        }
    }

    protected int value() {
        int v = 0;
        System.out.print("Enter the Value : ");
        v = i.nextInt();
        return v;
    }

    protected void queueDisplay() {
        for (int j = 0; j < size; j++) {
            System.out.print(array[j] + "  ");
        }
        System.out.println();
        System.out.println("Front = " + front);
        System.out.println("Rear  = " + rear);
    }
}
