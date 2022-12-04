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

Node* inorderSucc(Node* root)
{
    Node* cur = root;
    while(cur && cur->left !=NULL)
    {
        cur = cur->left;
    }
    return cur;
}
Node* delete_node(Node* root,int key)
{
    if(key<root->data)
    {
        root->left = delete_node(root->left,key);
    }
    else if(key>root->data)
    {
        root->right = delete_node(root->right,key);
    }
    else{
        if(root->left==NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        //Case 3
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = delete_node(root->right,temp->data);
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
    root=delete_node(root,2);
    cout<<"_______________________________"<<endl;
    preorder(root);
}
