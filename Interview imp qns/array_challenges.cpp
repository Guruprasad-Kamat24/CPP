#include<iostream>
using namespace std;
int main()
{
//1.Max of a[i]
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi=-99999999999;
    for(int i=0;i<n;i++)
    {
        int m=max(maxi,a[i]);
        cout<<m<<endl;
        maxi=m;
    }*/

//SunArrays = nC2 + n or n(n+1)/2   continues sequence
//Subsequence Non continues but in a sequence of index = 2^n
//Every subarray is a subsequence but every subsequence is not the subarray

//2.Sum of all subarrays
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];
            cout<<sum<<endl;
        }
    }*/

//***IMP***//Google kick start
//Longest Arithmetic Subarray
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=2;
    int j=2;
    int pd=a[1]-a[0];
    int curr=2;
    while(j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            curr++;
        }
        else{
            pd = a[j] - a[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;*/

//Record Breaker
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi=0;
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            cout<<a[i]<<endl;
        }
    }

}
