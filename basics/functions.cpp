#include<iostream>
#include<math.h>
using namespace std;
//Add func
    /*int add(int a, int b);
    int main()
    {
    int a =2;
    int b=4;
    cout<<add(a,b)<<endl;
    return 0;
    }
    int add(int a, int b)
    {
    int sum;
    sum = a+b;
    return sum;
    }*/


//Prime numbers
    /*int isPrime(int num)
    {
        int i;
        for(i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                return false;
            }
        }
        return true;

    }
    int main()
    {
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(isPrime(i))
            {
                cout<<i<<endl;
            }
        }
    }*/


//Fibonacci
    /*void fib(int n)
    {
        int t1=0,t2=1;
        int nxtTerm;
        for(int i = 1;i<=n;i++)
        {
            cout<<t1<<endl;
            nxtTerm = t1+t2;
            t1=t2;
            t2=nxtTerm;

        }

    }
    int main()
    {
        int n;
        cin>>n;
        fib(n);
        return 0;
    }*/


//Factorial
    /*int fact(int n)
    {
        int ans=n;
        int x;
        for(int i=1;i<n;i++)
        {
            x=n-i;
            ans = ans*x;
        }
        cout<<ans<<endl;
    }
    int main()
    {
        int n;
        cin>>n;
        fact(n);
    }*/

//calculate  nCr
    /*int fact(int n)
    {
        int ans=n;
        int x;
        for(int i=1;i<n;i++)
        {
            x=n-i;
            ans = ans*x;
        }
        return ans;
    }
    int main()
    {
        int n,r,nmr,ans,x;
        cin>>n>>r;
        int n_fact,r_fact,nmr_fact;
        nmr = n-r;
        n_fact=fact(n);
        r_fact=fact(r);
        nmr_fact=fact(nmr);
        x = nmr_fact * r_fact;
        ans = n_fact /  x;
        cout<<ans<<endl;
    }*/


//Pascal triangle  (Tij = iCj) i = rows, j = col
    /*int fact(int n)
    {
        int facto=1;
        for(int i=2;i<=n;i++)
        {
            facto*=i;
        }
        return facto;
    }
    int main()
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j <= i; j++)
            {
                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
            }
            cout<<endl;
        }
    }*/


//Sum of first n natural num
    /*int sum(int num)
    {
        int sum=0;
        for(int i = 0; i<=num;i++)
        {
            sum = sum+i;
        }
        return sum;
    }
    int main()
    {
        int n;
        cin>>n;
        cout<<sum(n)<<endl;
    }*/


//Pythagorian Triplet
    /*bool check(int x,int y, int z)
    {
        int a = max(x, max(y,z));
        int b,c;
        if(a==x)
        {
            b=y;
            c=z;
        }
        else if(a==y){
            b=x;
            c=z;
        }
        else{
            b = x;
            c = y;
        }
        if(a*a == b*b == c*c)
        {
            return true;
        }
        else{
            return false;
        }
    }
    int main()
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(check(x,y,z))
        {
            cout<<"Pythagorian Triplet"<<endl;
        }
        else{
            cout<<"Not Pythagorian Triplet"<<endl;
        }
    }*/


// Convergence
/*#include<bits/stdc++.h>
using namespace std;
    int BintoDec(int n)
    {
        int ans=0,x=1;
        while(n>0)
        {
            int y = n%10;
            ans += x*y;
            n = n/10;
            x = x*2;
        }
        cout<<ans;
    }

    int OcttoDec(int n)
    {
        int ans=0,x=1;
        while(n>0)
        {
            int y = n%10;
            ans += x*y;
            n = n/10;
            x = x*8;
        }
        cout<<ans;
    }

    int HextoDec(string n)
    {
        int ans=0,x=1;
        int s = n.size();
        for(int i = s-1;i>=0;i--)
        {
            if(n[i]>='0' && n[i]<='9')
            {
                ans += x*(n[i]-'0');
            }
            else if(n[i]>='A' && n[i]<='F')
            {
                ans += x*(n[i]-'A' + 10);
            }
            x*=16;
        }
        cout<<ans;
    }

    int DectoBin(int n)
    {
        int ans=0,x=1;
        while(x<=n)
        {
            x = x*2;
        }
        x=x/2;
        while(x>0)
        {
            int lastDigit = n/x;
            n -= lastDigit*x;
            x/=2;
            ans= ans*10 + lastDigit;
        }
        cout<<ans;
    }

    int DectoOct(int n)
    {
        int ans=0,x=1;
        while(x<=n)
        {
            x = x*8;
        }
        x=x/8;
        while(x>0)
        {
            int lastDigit = n/x;
            n -= lastDigit*x;
            x/=8;
            ans= ans*10 + lastDigit;
        }
        cout<<ans;
    }

    string DectoHex(int n)
    {
        int x=1;
        string ans[32];
        while(x<=n)
            x*=16;
        x/=16;
        while(x>0)
        {
            int lastDigit = n/x;
            n -= lastDigit*x;
            x = x/16;
            if(lastDigit<=9)
            {
                ans = ans+ to_string(lastDigit);
            }
            else{
                char c = 'A' + lastDigit - 10;
                ans.push_back(c);
            }
        }
        cout<<ans;
    }
    int main()
    {
        int n;
        string k;
       // cin>>k;
        cin>>n;
        //BintoDec(n);
        //OcttoDec(n);
        //HextoDec(k);
        //DectoBin(n);
        //DectoOct(n);
        //DectoHex(n);  //Something wrong
        return 0;
    }*/


//Add two Binary numbers
int reverse(int n)
    {
        int ans = 0;
        while(n>0)
        {
            int lastDigit = n%10;
        ans = ans*10 + lastDigit;
        n/=10;
        }
        return ans;
    }
    int addBin(int a, int b)
    {
        int ans=0,prevc = 0;
        while(a>0 && b>0)
        {
            if(a%2==0 && b%2==0)
            {
                ans = ans*10 + prevc;
                prevc=0;
            }
            else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
                    {
                        if(prevc==1)
                        {
                            ans = ans*10 + 0;
                            prevc=0;
                        }
                        else if(prevc==0)
                        {
                            ans = ans*10 + 1;
                            prevc=1;
                        }
                    }
                else{
                    ans = ans*10 + prevc;
                    prevc = 1;
                }
                a/=10;
                b/=10;
        }
        while(a>0)
        {
            if(prevc==1)
            {
                if(a%2 == 1)
                {
                    ans = ans*10+0;
                    prevc=1;
                }
                else{
                    ans = ans*10+1;
                    prevc=0;
                }
            }
            else{
                ans = ans*10 + (a%2);
            }
              a/=10;
        }
        while(b>0)
        {
            if(prevc==1)
            {
                if(b%2 == 1)
                {
                    ans = ans*10+0;
                    prevc=1;
                }
                else{
                    ans = ans*10+1;
                    prevc=0;
                }
            }
            else{
                ans = ans*10 + (b%2);
            }
            b/=10;
        }

        if(prevc==1)
        {
            ans = ans*10+1;
        }
        ans = reverse(ans);
        return ans;
    }

    int main()
    {
        int a,b;
        cin>>a>>b;
        cout<<addBin(a,b)<<endl;
    }
