#include<iostream>
#include "bits/stdc++.h"
using namespace std;

class queue1{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if(s1.empty() and s2.empty())
        {
            cout<<"Empty"<<endl;
            return -1;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }

    bool empty()
    {
        if(s1.empty() and s2.empty())
        {
            return true;
        }
        return false;
    }
};

int32_t main()
{
    queue1 q;
    q.push(1);
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    cout<<q.pop()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;

}

