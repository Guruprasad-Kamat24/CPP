#include<iostream>
using namespace std;
void swap1(int *a,int *b)
{
    int temp = *a;
    *a= *b;
    *b = temp;
}
int main()
{
//Basics
    /*int a = 10;
    int *aptr;
    aptr = &a;
    cout<<&a<<endl;    //0x61fe14 (address)
    cout<<aptr<<endl; //0x61fe14
    cout<<*aptr<<endl; //10 (* is the dereference operator)
    *aptr=20;
    cout<<a<<endl;  //20*/

//pointer Arithmetic  ( ++ , -- , + , - )
//int - 4bytes, char - 1 byte, float - 4/8 bytes;
    /*int a =10;
    int *aptr;
    aptr = &a;
    cout<<aptr<<endl;   //0x61fe14 (address)
    aptr++;
    cout<<aptr<<endl;   //0x61fe18 (address+4)*/
//Arr print type 1
    /*int arr[] = {10,20,30};
    cout<<*arr<<endl;
    int *ptr = arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }*/
//Arr print type 2
    /*int arr[] = {10,20,30};
    cout<<*arr<<endl;
    int *ptr = arr;
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;    //arr is indexing  ptr
    }*/

//Pointer to pointer
        /*int a =10;
        int *p;
        p = &a;
        cout<<*p<<endl; //10
        int **q = &p;
        cout<<*q<<endl;  //2000(address)
        cout<<**q<<endl;    //10    */

//Passing pointers to function
    int a=2;
    int b=4;
    int *aptr=&a;
    int *bptr = &b;
    swap1(aptr,bptr);       //OR swap1(&a,&b);    //Call by reference
    //swap1(a,b);  //pass by value  -- doesn't makes any change
    cout<<a<<" "<<b<<endl;
}
