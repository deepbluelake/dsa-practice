#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

// PREORDER TRAVERSAL
//  class Solution {
//  public:
//      vector<int> preorderTraversal(Node* root) {
//          vector<int> preorder;
//          traverse(root, preorder);
//          return preorder;
//      }

// private:
//     void traverse(Node* root, vector<int>& preorder) {
//         if (root == nullptr) return;
//         preorder.push_back(root->val);
//         traverse(root->left, preorder);
//         traverse(root->right, preorder);
//     }
// };

// LEVEL ORDER TRAVERSAL
vector<vector<int>> levelOrderTraversal(Node *root)
{
    vector<vector<int>> ans;
    if (root == nullptr)
        return ans;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

// ITERATIVE POSTORDER TRAVERSAL USING 2-STACKS
vector<int> iterativePostorderTraversal(Node *root)
{
    vector<int> postorder;
    if (root == NULL)
        return postorder;
    stack<Node *> stack1, stack2;
    stack1.push(root);
    while (!stack1.empty())
    {
        root = stack1.top();
        stack1.pop();
        stack2.push(root);
        if (root->left != NULL)
        {
            stack1.push(root->left);
        }
        if (root->right != NULL)
        {
            stack1.push(root->right);
        }
    }
    while (!stack2.empty())
    {
        postorder.push_back(stack2.top()->data);
        stack2.pop();
    }
    return postorder;
}

// ITERATIVE POSTORDER TRAVERSAL USING SINGLE STACK

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    vector<vector<int>> ans = levelOrderTraversal(root);
    cout << "Level Order traversal of binary tree is: ";
    for (auto level : ans)
    {
        for (auto node : level)
        {
            cout << node << " ";
        }
        cout << endl;
    }

    vector<int> ans2 = iterativePostorderTraversal(root);
    cout << "Postorder traversal of binary tree is: ";
    for (auto node : ans2)
    {
        cout << node << " ";
    }

    return 0;
}