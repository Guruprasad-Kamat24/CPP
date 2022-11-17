#include<iostream>
using namespace std;

// 1.Max nodes at a level L = 2^L
// 2.Max nodes in a tree of height H = 2^H - 1
// 3.For N nodes, min possible height or levels are log2(N+1)
// 4.Binary tree with L leaves has at least log2(N+1)+1 no. of levels
//Traversal: 1] Preorder : Root-Left-Right
//                 2] Inorder  : Left-Root-Right
//                 3] Postorder : Left-Right-Root

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

void inorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

void postorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;

}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right= new Node(5);
    root->right->left = new Node(6);
    root->right->right= new Node(7);
    preorder(root);
    cout<<"---------------------------------------------------"<<endl;
    inorder(root);
    cout<<"---------------------------------------------------"<<endl;
    postorder(root);
}
