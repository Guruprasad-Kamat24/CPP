#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
  int a[n];

  int sum=0;
  for(int i=0;i<n;i++){
      sum+=A[i];
      a[i]=sum;
  }

  sum=0;
    int flag=0;
  for(int j=n-1;j>=0;j--){
      sum+=A[j];
      a[j]-=sum;

      if(a[j]==0){
          flag=1;
      }
  }
   if(flag==1){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
    }
    return 0;
}
