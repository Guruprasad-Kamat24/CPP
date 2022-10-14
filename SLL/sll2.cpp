#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

//Insert at tail
void insertAtTail(node* &head, int val)
{
    node* n= new node(val);
    if(head==NULL)
    {
        head=n;
        return ;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

//Insert at head
void insertAtHead(node* &head,int val)
{
    node* n= new node( val);
    n->next=head;
    head=n;
}

//Display
void display(node* head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

//Search
bool search1(node* head,int val)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==val)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

//Deletion
void delete1(node* head,int val)
{
    node* temp=head;
    if(head==NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        if(temp->next->data==val)
        {
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }
    display(head);
}

//Iterative method for reversal of linked list
node* reversed(node* &head)
{
        node* preptr=NULL;
        node* currptr=head;
        node* nextptr;
        while(currptr!=NULL)
        {
            nextptr = currptr->next;
            currptr->next=preptr;

            preptr = currptr;
            currptr = nextptr;

        }
        head = preptr;
        return head;
}

//Recursive way of reversing a linked list
node* reversedRecursive(node* &head)
{
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        node* newhead = reversedRecursive(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,100);
    insertAtTail(head,1000);
    insertAtHead(head,500);
    display(head);
    delete1(head,100);

    //node* newhead = reversed(head);
    //display(newhead);

    node* newhead = reversedRecursive(head);
    display(newhead);
    cout<<search1(head,150)<<endl;
}
