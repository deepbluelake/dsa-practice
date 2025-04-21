#include <iostream>
using namespace std;

class Queue {
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this -> size = size;
        front = 0;
        rear = 0;
        arr = new int[size];
    }

    void enqueue(int data){
        if(rear == size){
            cout << "Queue is full!" << endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue(){
        if(front == rear){
            cout << "Queue is empty!" << endl;
            front = 0;
            rear = 0;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

        bool isEmpty(){
            if(front == rear){
                return true;
            }
            else {
                return false;
            }
        }

        int first(){
            if (front == rear){
                cout << "The queue is empty!" << endl;
            }
            else {
                return arr[front];
            }
        }
};