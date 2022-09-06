#include<iostream>
using namespace std;
int main()
{
//Declaration
    /*char arr[100] = "apple";
    int i=0;
    while(arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }*/
//I/O
    /*char arr[100];
    cin>>arr;
    cout>>arr[2];*/


//Check Palindrome
    /*int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                check=1;
            }
            else{
                check=0;
            }
        }
    }
    if(check)
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }*/

//Given a sentence find the largest word
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int curlen=0;
    int maxlen=0;
    int st=0,maxst=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(curlen>maxlen)
            {
                maxlen = curlen;
                maxst = st;
            }
            curlen=0;
            st = i+1;
        }
        else{
            curlen++;
        }

        if(arr[i]=='\0')
            break;
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++)
    {
        cout<<arr[i+maxst]<<endl;
    }

}
