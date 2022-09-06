#include<iostream>
using namespace std;
int main()
{
//1.Transpose of a matrix
    /*int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"_________"<<endl;
    int b[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                b[i][j] = a[j][i];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }*/

//2.Matrix Multiplcation
    /*int n1,m1;
    cout<<"N1,M1"<<endl;
    cin>>n1>>m1;
    int a[n1][m1];
    cout<<"Matrix1"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
                cin>>a[i][j];
        }
    }
    int n2=m1,m2;
    cout<<"M2"<<endl;
    cin>>m2;
    int b[n2][m2];
    cout<<"Matrix2"<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
                cin>>b[i][j];
        }
    }
    int c[n1][m2];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
                c[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++)   //Rows of 1st matrix
    {
        for(int j=0;j<m2;j++)   //Cols of 2st matrix
        {
            for(int k=0;k<n2;k++)   //Rows of 2st matrix
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    cout<<"Ans"<<endl;
     for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
                cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }*/

//3.Matrix search   //Note: The elements of matrix are sorted in both rows and columns
    int n,m;
    cout<<"N,M"<<endl;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                cin>>a[i][j];
        }
    }
    cout<<"target"<<endl;
    int target;
    cin>>target;
    int r=0,c=m-1;    //Top right position
    bool flag=0;
    while(r<n && c>=0)
    {
        if(a[r][c]==target)
        {
            flag=1;
        }
        if(a[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
    }
    if(flag)
        {
            cout<<"Found"<<endl;
        }
        else{
            cout<<"Not Found"<<endl;
        }



}
