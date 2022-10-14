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
//Makes cycle
void makeCycle(node* &head, int pos)
{
        node* temp=head;
        node* startNode;
        int count1=1;
        while(temp->next!=NULL)
        {
            if(count1==pos)
            {
                startNode=temp;
            }
            temp=temp->next;
            count1++;
        }
        temp->next = startNode;
}

//Hair & tortoise algorithm
bool detectCycle(node* head)
{
    node* hair=head;
    node*tortoise=head;
    while(hair!=NULL && hair->next!=NULL)
    {
        hair=hair->next->next;
        tortoise=tortoise->next;
        if(hair==tortoise)
        {
            return true;
        }
    }
    return false;
}

//Remove cycle
void removeCycle(node* &head){
    node* rabbit = head;
    node* turtle = head;

    while(rabbit != NULL){
        rabbit = rabbit->next->next;
        turtle = turtle->next;

        if(rabbit == turtle){
            break;
            rabbit = head;
            while(rabbit != turtle){
                rabbit = rabbit->next;
                turtle = turtle->next;
            }
        }
    }
     turtle->next->next = NULL;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makeCycle(head,3);
    //display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
}

