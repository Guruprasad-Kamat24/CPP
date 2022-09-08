#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
//1. Upper or Lower case coverter
    //Method 1
    /*string str = "guruprasad";
    string str2 = "KAMAT";
    //cout<<'a'-'A'<<endl;     //Diff betn lower - upper case is 32
    for(int i=0;i<str.size();i++)       //To upper case
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
    for(int i=0;i<str2.size();i++)      //To lowercase
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str2[i] += 32;
        }
    }
    cout<<str2<<endl;*/
    //Method 2
    /*string s = "guruprasad";
    transform(s.begin(), s.end(), s.begin(), ::toupper);        //transform(starting index, end index,  index from which it should get capitalized, ::toupper / ::tolower)
    cout<<s<<endl;

    string s1 = "GURUPRASAD";
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);        //transform(starting index, end index,  index from which it should get capitalized, ::toupper / ::tolower)
    cout<<s1<<endl;*/

//2. For the biggest number from the numeric string
    /*string s = "235162";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;*/

//3.Output the max occuring char from the string
    string s = "hjgdjashaabnbcccwwwwwseereambbbbaaeeww";
    int freq[26] ;
    for(int i=0;i<26;i++)
    {
        freq[i] = 0;
    }
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'a']++;
    }
    int maxi = 0;
    char ans = 'a';
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxi)
        {
            maxi = freq[i];
            ans = i+'a';
        }
    }
    cout<<maxi<<" "<<ans<<endl;

}
