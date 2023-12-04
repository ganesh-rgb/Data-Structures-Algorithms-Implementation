// You are using GCC



#include <iostream>
using namespace std;
struct Node {
    int data;
  Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
 void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}
 void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}
int main()
{
    struct Node* root = new Node(89);
    root->left = new Node(20);
    root->right = new Node(83);
    root->left->left = new Node(46);
    root->left->right = new Node(85);
    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);
    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);
    return 0;
}
