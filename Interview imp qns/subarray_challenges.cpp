#include<iostream>
#include<climits>
using namespace std;
/*int kadane(int a[],int n)
{
    int currentsum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentsum+=a[i];
        if(currentsum<0)
        {
            currentsum=0;
        }
        maxsum = max(maxsum,currentsum);
    }
}*/
bool pairsum(int arr[], int n, int k)
{
    int low=0;
    int high = n-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
//1.Printing the subarrays
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
        cout<<"____"<<endl;
    }*/

//2.Find the subarray with Maximum sum
//Normal way
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi = INT_MIN;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum += a[k];
            }
            maxi = max(maxi,sum);
        }
    }
    cout<<maxi<<endl;*/

//Cumulative sum approach
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currsum[n+1];
    currsum[0]=0;
    for(int i=1;i<=n;i++)
    {
        currsum[i] = currsum[i-1] + a[i-1];
    }
    int maxsum = INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum = 0;
        for(int j=0;j<i;j++)
        {
            sum = currsum[i] - currsum[j];
            maxsum = max(sum,maxsum);
        }
    }
    cout<<maxsum<<endl;*/

//******IMP******kadence algo to calculate the subarray with Maximum sum    ***MOST OPTIMIZED
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currsum=0;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxi = max(maxi,currsum);
    }
    cout<<maxi<<endl;*/

//2.Maximum Circular subarray sum
//Max subarray sum = Total sum of array - Sum of non-Contributing elements
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum = totalsum+kadane(a,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;*/

//3. Pair Sum problem
    /*int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }*/
    int k=31;
    int a[]={2,4,7,11,14,16,20,21};
    cout<<pairsum(a,8,k)<<endl;

}
