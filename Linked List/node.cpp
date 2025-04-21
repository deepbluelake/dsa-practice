class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

//TakeInput

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

//Printing a LinkedList

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
    cout << temp -> data << " ";
    temp = temp -> next;
    } 
}

//Calculating Length of a LinkedList

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

//Printing ith Node

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
            cout << endl << "Node at position " << i <<" : " << temp->data << endl;
            return;  // Found the ith node, so exit the function
        }
        temp = temp->next;
        n++;
    }
}

//Inserting Node to ith Position
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

Node* insertAtHead(Node* head, int data){
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
    return head;
}

Node* insertAtTail(Node* head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;

    while(temp -> next != nullptr){
        temp = temp -> next;
    }
    temp -> next = newNode;
    return head;
}



//Deleting ith Node

Node* deleteNode(Node* head, int index){

    int count = 0;
    Node* temp = head;

    if(index == 0){
        head = head -> next;
        delete temp;
        return head;
    }

    //traverse till index-1th node
    while(temp != nullptr && count < index-1){
        temp = temp -> next;
        count++;
    }

    //Performing Delete Operation
    // if (temp != nullptr){
    //     Node* a = temp -> next;
    //     Node* b = a -> next;
    //     delete a;
    //     temp -> next = b;
        
    // }
    if (temp != nullptr){
        Node* a = temp -> next;
        Node* b = a -> next;
        delete a;
        temp -> next = b;
        
    }

    return head;
}