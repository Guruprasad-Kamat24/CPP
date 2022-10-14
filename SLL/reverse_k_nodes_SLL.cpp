#include<iostream>
using namespace std;

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

node* reversek(node* &head, int k)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count1=0;
    while(currptr!=NULL && count1<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count1++;
    }
    if(nextptr!=NULL){
    head->next = reversek(nextptr,k);
    }
    return prevptr;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,100);
    insertAtTail(head,1000);
    insertAtTail(head,10000);
    insertAtTail(head,100000);
    insertAtTail(head,1000000);
    display(head);
    int k = 2;
    node* newhead = reversek(head,k);
    display(newhead);
}
