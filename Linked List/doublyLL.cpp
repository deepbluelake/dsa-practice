#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node* insertNode(Node* head, int i, int data){
    Node* newNode = new Node(data);
    int count = 0;
    Node* temp = head;
    if(i == 0){
        newNode -> next = head;
        head = newNode;
        return head;
    }

    //traverse till i-1th node
    while(temp != nullptr && count < i-1){
        temp = temp ->next;
        count++;
    }
    //Establishing Connections
    if (temp != nullptr){
        // Node* a = temp->next;
        // temp->next = newNode;
        // newNode -> next = a;
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    return head;
}


int main(){
    
    return 0;
}
