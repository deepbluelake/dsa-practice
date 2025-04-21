#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int val) : data(val), right(nullptr), left(nullptr) {}
};

void levelOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    queue<Node *> q;
    q.push(root); // Push root before entering the loop

    while (!q.empty())
    {
        Node *node = q.front(); // Get front node
        q.pop();

        cout << node->data << " "; // Print node's data

        if (node->left) // Push left child if exists
            q.push(node->left);
        if (node->right) // Push right child if exists
            q.push(node->right);
    }
}

int main()
{
    Node *q = new Node(1);
    q->left = new Node(2);
    q->right = new Node(3);

    cout << "Root: " << q->data << endl;
    cout << "Left Child: " << q->left->data << endl;
    cout << "Right Child: " << q->right->data << endl;

    levelOrderTraversal(q);

    delete q->left;

    delete q->right;
    delete q;

    return 0;
}