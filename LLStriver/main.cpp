#include <iostream>
#include "node.cpp"
using namespace std;

void insertAtHead(Node* head, int data){
    //create new node
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " "; 
        temp = temp->next;
    }

}


int main(){

    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1 << endl;

    //head pointed to new node
    Node* head = node1;
    print(head);

    //insetAthead
    insertAtHead(head, 20);
    print(head);

    
    return 0;
} 