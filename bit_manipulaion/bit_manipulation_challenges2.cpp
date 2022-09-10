#include<iostream>
using namespace std;
int unique1(int arr[],int n)
{
    int xorsum = 0;
    for(int i=0;i<=7;i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
int setBit(int n,int pos)
{
    return ((n&(1<<pos))!=0);
}
void unique2(int arr[],int n)
{
    int xorsum = 0;
    for(int i=0;i<=7;i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor = 0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newxor = newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}
int main()
{
//1.Finding the unique number in an array using XOR
    /*int arr[7] = {1,2,3,4,1,2,3};
    cout<<unique1(arr,7)<<endl;*/

//2.Find the two unique numbers from an array
    int arr[8]={1,2,3,1,2,3,5,7};
    unique2(arr,8);

}
