#include<iostream>
using namespace std;
bool ispowerof2(int n)
{
    return (n &&!(n&n-1));
}
int countones(int n)
{
    int i;
    while(n>0)
    {
        n = n & (n-1);
        i++;
    }
    return i;
}
void subsets(int arr[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }

}
int main()
{
//1. Check if a given number is power of 2   //n = 6 = (0110)  then n-1 = 5 = (0101)
    //cout<<ispowerof2(16)<<endl;
//2.Count the number of ones in a binary number   //(n & n-1) has same bits as n except the rightmost set bit
    //cout<<countones(19)<<endl;
//3.Generate all possible subsets of a set
    int arr[4] = {1,2,3,4};
    subsets(arr,4);

}
