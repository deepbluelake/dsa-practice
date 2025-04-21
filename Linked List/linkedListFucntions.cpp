#include <iostream>
using namespace std;
#include "node.cpp"

Node* takeInput(){
    int data;
    cin >> data;
    Node* head = nullptr;
    Node* tail = nullptr;
    while(data != -1){
        Node* newNode = new Node(data);
        if(head==nullptr){
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
    cout << temp -> data << " ";
    temp = temp -> next;
    } 
}

int length (Node* head){
    Node* temp = head;
    int counter = 0;
    if (temp == nullptr){
        counter = 0;
    }
    else{
    while(temp != nullptr){
        counter++;
        temp = temp->next;
    }
    }
    return counter;
}

void printIthNode(Node *head, int i) {
    if (head == nullptr) {
        // Handle the case of an empty linked list
        cout << "" << endl;
        return;
    }

    int n = 0;
    Node *temp = head;

    while (temp != nullptr) {
        if (n == i) {
            cout << temp->data << endl;
            return;  // Found the ith node, so exit the function
        }
        temp = temp->next;
        n++;
    }
}

int main(){
    Node* head = takeInput();
    int Length = length(head);
    cout << "Length of linked list: " << Length << endl;
    print (head);
    return 0;
} 


