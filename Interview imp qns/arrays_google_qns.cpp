#include<iostream>
using namespace std;
int main()
{
//1.First Repeating element
   /*int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i-1;j>0;j--)
        {
            if(a[i]==a[j])
            {
                cout<<j<<endl;
                return 0;
            }
        }
    }*/
//2.Subarray with Given Sum
    /*int n;
    cin>>n;
    int a[n];
    int s;
    cout<<"Enter sum"<<endl;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int st=-1;
    int en = -1;
    int sum=0;
    int i=0,j=0;
    while(j<n && sum+a[j]<=s)
    {
        sum +=a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<""<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum-=a[i];
            i++;
        }
        if(sum==s)
       {
        st = i+1;
        en = j+1;
        break;
        }
        j++;
    }

    cout<<st<<" "<<en<<endl;*/


//3.Smallest positive missing number
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    const int N = 1e6 + 2;
    bool b[N];
    for(int i=0;i<n;i++)
    {
        b[i]==0;
    }
    for(int i=0;i<n;i++)
    {
        int c=a[i];
        if(a[i]>0)
        {
            b[c]=1;
        }
    }
    for(int i=1;i<N;i++)
    {
        if(b[i]==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }




}
