#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;

    }

};


int MaxDepth(Node* root){
    if(root == nullptr) return 0;
    int level = 0;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        level++;
        int size = q.size();
        for(int i = 0; i < size; i++){
            Node* node = q.front();
            q.pop();
            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
        }
    }
    return level;

}

//RECURSION SOLUTION -> BETTER

int maxDepthRecursive(Node* root){
    if(root == nullptr) return 0;
    int lh = maxDepthRecursive(root->left);
    int rh = maxDepthRecursive(root->right);

    return 1+max(lh,rh);//FOR EVERY NODE THE DEPTH OF ITS SUBTREE

}


//TO CHECK IF A TREE IS BALANCED OR NOT
    // Function to check if a binary tree is balanced
    bool isBalanced(Node* root) {
        // If the tree is empty, it's balanced
        if (root == nullptr) {
            return true;
        }

        // Calculate the height of left and right subtrees
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        // Check if the absolute difference in heights
        // of left and right subtrees is <= 1
        if (abs(leftHeight - rightHeight) <= 1 &&
            isBalanced(root->left) &&
            isBalanced(root->right)) {
            return true;
        }

        // If any condition fails, the tree is unbalanced
        return false;
    }

    // Function to calculate the height of a subtree
    int getHeight(Node* root) {
        // Base case: if the current node is NULL,
        // return 0 (height of an empty tree)
        if (root == nullptr) {
            return 0;
        }

        // Recursively calculate the height
        // of left and right subtrees
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        // Return the maximum height of left and right subtrees
        // plus 1 (to account for the current node)
        return max(leftHeight, rightHeight) + 1;
    };

//Boundary Traversal over a Tree


int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(70);

    cout << MaxDepth(root) << endl;
    cout << maxDepthRecursive(root)<< endl;

    return 0;
}