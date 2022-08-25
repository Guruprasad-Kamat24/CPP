#include<iostream>
#include<climits>
using namespace std;


//Syntax

    /*int main()
    {
    int array[4] = {10,20,30,40};
    cout<<array[3]<<endl;*/
    /*int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;
    }*/

//Find max & min from array
    /*int n;
    cin>>n;
    int array1[n];
    for(int i=0;i<n;i++)
    {
        cin>>array1[i];
    }
    int maxn;
    maxn=INT_MIN;
    int minn;
    minn=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        maxn = max(maxn,array1[i]);
        minn=min(minn,array1[i]);
    }
    cout<<maxn<<endl;
    cout<<minn<<endl;*/

//Searching in arrays
    /*int n;
    cout<<"Enter num: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key: "<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Key found with index: "<<i<<endl;
            break;
        }
    }
    }*/


//Binary Search   VVVVVIMP
    /*int binarySearch(int arr[],int n,int key)
    {
        int s=0;
        int e=n;
        while(s<=e)
        {
            int mid=(s+e)/2;

            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]>key)
            {
                e = mid-1;
            }
            else {
                s=mid+1;
            }
        }
        return -1;
    }
    int main()
    {
        int n;
    cout<<"Enter num: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    }*/


//Sorting in arrays
    //Selection sort
    /*int main()
    {
        int n;
        cout<<"Enter no: "<<endl;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }*/







