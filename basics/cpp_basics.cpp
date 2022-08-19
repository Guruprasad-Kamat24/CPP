#include<iostream>
using namespace std;
int main(){
 //1   //Datatypes
    /*int a;
    a=20;
    cout<<"Size of int: "<<sizeof(a)<<endl;

    float b;
    b=21.98;
    cout<<"Size of float: "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of char: "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of bool: "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"Size of short int: "<<sizeof(si)<<endl;
    cout<<"Size of long int: "<<sizeof(li)<<endl;*/


 //2   //Input-Output
    /*int amt1;
    cin>>amt1;
    int amt2;
    cin>>amt2;
    int sum;
    sum=amt1+amt2;
    cout<<sum;*/

//3    //IF-Else
    /*int savings;
    cin>>savings;
    if(savings>5000){
        cout<<"Neha\n";
    }else if(savings>2000 && savings<5000){
        cout<<"Rashmi\n";
    }
    else{
        cout<<"FRNDS\n";
    }*/

    //Nested IF-ELSE
    /*int savings2;
    cin>>savings2;
    if(savings2>5000){
        cout<<"Neha\n";
        if(savings2>10000 && savings2<15000 ){
            cout<<"Ride\n";
        }
        else if(savings2>15000){
            cout<<"5Star\n";
        }
    }else if(savings2>2000 && savings2<5000){
        cout<<"Rashmi\n";
    }
    else{
        cout<<"FRNDS\n";
    }*/

 //4   //LOOPS
    //For loop
    /*int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum: \n"<<sum;*/

    //While loop
    /*int n;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }*/

    //Do while loop
    /*int n;
    cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);*/

    //Jumps in loops
    /*int pocketmoney=3000;
    for(int date=1;date<=30;date++)
    {
        if(pocketmoney==0)
        {
            break;
        }
        if(date%2==0){
            continue;
        }
        cout<<"Go out today"<<endl;
        pocketmoney=pocketmoney-300;
    }*/

    //Skip3 multiples frm 1 to 100
    /*for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }*/

    //FIND IF THE NO IS PRIME
    /*int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Non prime";
            break;
        }
    }
    if(i==n){
        cout<<"Prime";
    }*/

    //Find the prime numbers between the range
    /*int i,a,b,j;
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                cout<<"Non prime: "<<i<<endl;
                break;
            }
        }
        if(j==i){
            cout<<"Prime: "<<i<<endl;
        }
    }*/

//5    //Switch statemet
    /*char button;
    cout<<"Enter the button"<<endl;
    cin>>button;
    switch(button)
    {
        case 'a':cout<<"Hello"<<endl;
        break;
        case 'b':cout<<"Hi"<<endl;
        break;
        case 'c':cout<<"Bye"<<endl;
        break;
        default:cout<<"Wrong"<<endl;
        break;
    }*/

//6 //Opertors
    //Incrementer
    /*int i=1;
    int j=2;
    int k;
     //1    //2  //1     //2    //3    //4
    k = i  +  j  +  i++  +  j++  +  ++i  +  ++j;
    cout<<i<<" "<<j<<" "<<k<<endl;*/

    //Decrementer
    /*int i=0;
    //0      //0    //1    //1
    i= i++  -  --i  +  ++i  -  i--;
    cout<<i<<endl;*/

    //Relational operators
    // ==, !=, >, <, >=, <=

    //Logical operators
    // &&, ||, !

    //Bitwise operator
    // &(AND) , |(OR) , ^ (XOR) , ~ (NOT) , << (LEFT SHIFT) , >> (RIGHT SHIFT)

    //Assignment operators
    // = equals two operands , += assigns sum of 2 operands to left , -= assigns substraction of 2 operands to left , *= assigns prodct of 2 operands to left , /= assigns quotient of 2 operands to left

    //Miscellaneous operands
    // sizeof()  -- size of variable
    //condition ? X = Y   --Returns value of X f condition is true or else the value of Y
    //cast  -- converts one type to another
    //comma(,)  -- creates a sequence of operations to be performed
    // &  -- returns address of variable (ref operator)
    // *  -- pointer to a variable

    //Operators precedence: GOOGLE IT
}
