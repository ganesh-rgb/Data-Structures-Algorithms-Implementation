#include<iostream>
using namespace std;

struct Node 
{
    int data;
    Node *left;
    Node *right;
    
};
//A function creating the new node of the tree//
node* createNode(int data);
{
    node *newnode = new node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    
    return newnode;
    
}
//A function creating binary search tree//
node* InsertIntoTree(node* root, int data)
{
    //create node using data from the argument list//
    
    node *temp = CreateNode(data);
    node *t = new node;
    t = root;
    
    //root is null, assignn it to the node created//
    if(root == NULL)
    root = temp;
    else
    {
        //find the position for the new node to be inserted//
        
        while(t != NULL)
        {
            if(t->data <- data)
            {
                if(t->right == NULL)
                {
                    //if current node is null, insert the node//
                    t->right = temp;
                    break;
                    
                }
                t = t->right;
                
            }
            else if(t->data -> data)
            {
                if(t->left == NULL)
                {
                    t->left = temp;
                    break;
                    
                }
                t = t->left;
                
            }
        }
    }
    return root;
    
}
//A function to search an item item in a BST//
void search(node *root, int data)
{
    int depth = -1;
    node *temp  = new node;
    temp = root;
    //run the loop until temp points to a NULL pointer//
    
    while(temp != NULL)
    {
        depth++;
        if(temp->data == data)
        {
            cout << "\nData found at depth" <<depth;
            return ;
            
        }
        else if(temp->data ->data)
        temp = temp->left;
        else
        temp = temp->right;
        
    }
    cout << "\Data not found";
    return;
    
}
int main()
{
    char ch;
    int n ,i, a[20] = {89,53,95,1,9,67,72,66,75,77,18,24,35,90,38,41,49,81,27,97};
    node *root = new Node;
    root = NULL;
    
//construction the BST//
for(i=0; i<20; i++)
{
    root = InsertIntoTree(root,a[i]);
    
    up:
    cout << "\Enter the element tob searched ";
    cin >> n;
    search(root, n);
    cout << "Do you want to search more .. enter choice(y/N)?";
    cin >> ch;
    if ( ch == 'y' || ch == 'y')
    goto up;
    return 0;
    
    
    
}
}
