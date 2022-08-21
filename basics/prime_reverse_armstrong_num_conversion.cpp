#include<iostream>
#include<cmath>
using namespace std;
void decToBinary(int n);
int main() {
//Prime
    /*int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Non Prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime"<<endl;
    }*/

//Reverse a given number
    /*int n;
    cin>>n;
    int rev;
    while(n>0)
    {
        int lastDigit = n%10;
        rev = rev*10 + lastDigit;
        n = n/10;
    }
    cout<<rev;*/

//Armstrong number(Sum of cubes of individual digit is the same number itself)
    /*int n;
    cin>>n;
    int original_n = n;
    int sum=0,power;
    while(n>0)
    {
        int lastDigit = n%10;
        power=pow(lastDigit,3);
        sum=sum+power;
        n=n/10;
    }
    if(sum==original_n)
    {
        cout<<"ARMSTRONG"<<endl;
    }
    else{
        cout<<"Not ARMSTRONG"<<endl;
    }*/

//Decimal to binary
    int n;
    cin>>n;
    decToBinary(n);
    return 0;
}
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
