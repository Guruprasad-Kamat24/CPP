#include<iostream>
#define n 20
using namespace std;

class queue{
int* arr;
int front;
int back;
public:
    queue()
    {
        arr = new int[n];
        front=-1;
        back=-1;
    }
    void enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"Queue is overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"No Element"<<endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"No Element"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if(front==-1 || front>back)
        {
            cout<<"No Element"<<endl;
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    cout<<q.empty()<<endl;
    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.peek()<<endl;
    return 0;
}
