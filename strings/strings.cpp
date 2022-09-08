#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
//Types of declaring strings
//1.
     /*string str;
    cin>>str;
    cout<<str;*/
//2.
    /*string str1(5,'n');
    cout<<str1<<endl;*/
//3.
    /*string str2 = "ApniKaksha";
    cout<<str2;*/
//4. ***IMP//To take line with spacs
    /*string str3;
    getline(cin, str3);
    cout<<str3<<endl;*/



//Different functions on strings
//1.String Concatination
    /*string s1 = "Fam";
    string s2 = "ily";
    //s1.append(s2);
    //cout<<s1<<endl;
    cout<<s1+s2<<endl;*/
//2.Access the char in string
    /*string s1 = "Fam";
    string s2 = "ily";
    cout<<s1[1]<<endl;*/
//Clear function
    /*string abc = "sddnjljkhjjdffasfljkk";
    abc.clear();*/
//Comparing two strings
    /*string s1 = "abc";
    string s2 = "abc";
    if(s1.compare(s2) == 0)
    {
        cout<<"Strings are equal"<<endl;
    }*/
//Check if string is empty
    /*string s1 = "abc";
    cout<<s1<<endl;
    s1.clear();
    if(s1.empty())
    {
        cout<<"Empty"<<endl;
    }*/
//Erase  //To delete the specific chars
    /*string s1 = "nincompoop";
    s1.erase(3, 3);      // s1.erase(starting index of char to be deleted, no of char to be deleted)
    cout<<s1<<endl;*/
//Find Function
    /*string s1 = "nincompoop";
    cout<<s1.find("com")<<endl;     //Returns the first index of place where the chars are found
    */
//Insert function
    /*string s1 = "nincompoop";
    s1.insert(2,"lol");     //s1.insert(index,string);
    cout<<s1<<endl;*/
//length function
    /*string s1 = "nincompoop";
    cout<<s1.size()<<endl;      //size() or length()
    */
//To get substring of a string
    /*string s1 = "nincompoop";
    string s = s1.substr(6,4);      //s1.substr(starting index, no of chars)
    cout<<s<<endl;*/
//***IMP***
//String to integer
    /*string s1 = "144";
    int x = stoi(s1);
    cout<<x<<endl;*/
//Int to string
    /*int x = 144;
    string s = to_string(x);
    cout<<s<<endl;*/

//**** Sort the string  Use #include<algorithm>
    string s1 = "zfghywmjkfsdggj";
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;





}
