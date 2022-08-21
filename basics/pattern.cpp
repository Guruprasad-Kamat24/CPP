#include<iostream>
using namespace std;

int main()
{
    //RECTANGULAR PATTERN
    /*int rows=5;
    int col=4;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*\t";
        }
        cout<<"\n"<<endl;
    }*/

    //HOLLOW RECTANGLE
    /*int col=4,rows=5;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 || i==rows){
                cout<<"*\t";
            }
            else if(j==1 || j==col){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n"<<endl;
    }*/
    //Inverted Half Pyramid
    /*int row=5;
    for(int i =row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }*/

    //Half pyramid after 180 rotation
    /*int rows=5;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(j<=rows-i)
            {
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }*/

    //Half Pyramid using numbers
    /*int rows=5;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }*/

    //Floyd's Triangle
    /*int rows=5;
    int k=0;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            k+=1;
            cout<<"\t"<<k;
        }
        cout<<endl;
    }*/

//VVIMP    //Butterfly pattern
    /*int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<" * ";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j = 1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<" * ";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j = 1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }*/
    //Inverted number triangle
    /*int n;
    cin>>n;

     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=n+1-i;j++)
         {
             cout<<" "<<j;
         }
         cout<<endl;
     }*/

     // 0-1 pattern
     /*int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=i;j++)
         {
             if((i+j)%2==0)
             {
                 cout<<"1 ";
             }
             else{
                cout<<"0 ";
             }
         }
         cout<<endl;
     }*/

     //Rhombus
     /*int n;
     cin>>n;
     for (int i=1;i<=n;i++)
     {
         for(int j=1;j<=n-i;j++)
         {
             cout<<" ";
         }
         for(int j=1;j<=n;j++)
         {
             cout<<"*";
         }
         cout<<endl;
     }*/

     //Number Pyramid
    /*int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }*/

    //Palindromic Pattern



}
