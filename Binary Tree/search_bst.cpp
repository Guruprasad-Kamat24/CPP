#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* search_in_bst(Node* root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return search_in_bst(root->left,key);
    }
    else
    {
        return search_in_bst(root->right,key);
    }
}

void preorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}


int main()
{
    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right= new Node(3);
    root->right->right= new Node(6);
    preorder(root);
    if(search_in_bst(root,5))
    {
        cout<<"Key exists"<<endl;
    }
    else{
        cout<<"key doesnt exist"<<endl;
    }
}
