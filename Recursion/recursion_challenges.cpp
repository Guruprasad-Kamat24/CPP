#include<iostream>
using namespace std;
bool sorted(int a[], int n)
{
    if(n==1)
    {
        return true;
    }
    bool restArray = sorted(a+1,n-1);
    if(a[0]<a[1] && restArray)
    {
        return true;
    }
    return false;
}

void dec(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    dec(n-1);

}

void inc(int x,int n)
{
    if(x==n+1)
    {
        return;
    }
    cout<<x<<endl;
    inc(x+1,n);
}

int firstocc(int arr[],int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    int restArray = lastocc(arr,n,i+1,key);
    if(restArray!=-1)
    {
        return restArray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
// Check if the array is sorted (Strictly increasing)
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sorted(a,n)<<endl;*/

//Print numbers in decreasing and increasing order
    /*int n;
    cin>>n;
    //dec(n);
    int x=1;
    inc(x,n);*/

//Find the first and last occurence of a number in an array
    /*int a[] = {4,2,1,2,5,2,7};
    cout<<firstocc(a,7,0,2)<<endl;
    cout<<lastocc(a,7,0,2)<<endl;*/
}
