#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next,*prev;
    node(int val){
        data=val;
        next=NULL;prev=NULL;
    }
};
 void insertAtHead(node* &head,int val){
     node*n=new node(val);
     node*temp=head;
     n->next=head;
     if(head!=NULL){
         head->prev=n;
     }
     head=n;
 }
 void insertAtTail(node* &head,int val){
     if(head==NULL){
         insertAtHead(head,val);
         return;
     }
     node* n=new node(val);
     node*temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=n;
     n->prev=temp;
 }
  void display(node*head){
      node*temp=head;
      while(temp!=NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
  }
   void deleteHead(node* &head){
       node*todelete=head;
       head=head->next;
       head->prev=NULL;
       delete todelete;

   }
void deletion(node* &head,int val)
{
       node*temp=head;
       if(temp->data==val){
           deleteHead(head);
           return;
       }
       while(temp!=NULL && temp->data!=val){
             temp=temp->next;
         }
         temp->prev->next=temp->next;
         if(temp->next!=NULL){
             temp->next->prev=temp->prev;
         }
         delete temp;
}
 //Calculating length of Linked list
 int length(node* head)
 {
     node* temp=head;
     int l=0;
     while(temp->next!=NULL)
     {
         temp=temp->next;
         l++;
     }
     return l;
 }

 //Append K nodes at linked list
node* k_append(node* &head,int k)
 {
     node* tail=head;
     node *newhead;
     node *newtail;
     int l = length(head);
     k=k%l;
     int count1=1;
     while(tail->next!=NULL)
     {
         if(count1==l-k)
         {
             newtail = tail;
         }
         if(count1==l-k+1)
         {
             newhead=tail;
         }
         tail = tail->next;
         count1++;
     }
    newtail->next = NULL;
    tail->next = head;
    return newhead;
 }

int main(){
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
     insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
     insertAtTail(head,6);
    display(head);
     insertAtHead(head,7);
     display(head);
   deletion(head,6);
   display(head);
   node* newhead = k_append(head,3);
    //    deleteHead(head);
     display(newhead);



    return 0;
}
