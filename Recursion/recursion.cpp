#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevsum = sum(n-1);
    return n + prevsum;
}
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevpower = power(n,p-1);
    return n*prevpower;
}
int facto(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevfact = facto(n-1);
    return n * prevfact;
}
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)                                        //Base Conditions
    {
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}
int main()
{
//Sum of n numbers
    /*int n;
    cin>>n;
    cout<<sum(n)<<endl;*/
//Calculate n raised to power of p
    /*int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;*/
//Factorial of a number
    /*int n;
    cin>>n;
    cout<<facto(n)<<endl;*/
//Print Nth Fibnacci number
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}
