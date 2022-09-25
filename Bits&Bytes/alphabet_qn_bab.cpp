/*Rahul wants to increase his typing speed as he has a desire to participate in programming contests.
So, his friend suggested that he types the sentence "The quick brown fox jumps over the lazy dog" repeatedly.
This sentence is known as a pangram because it contains every letter of the alphabet.
After typing the sentence several times, Rahul became bored with it so he started to look for other pangrams.
Given a sentence, determine whether it is a pangram.
Input #1
We promptly judged antique ivory buckles for the next prize
Input #2
We promptly judged antique ivory buckles for the prize
Sample Output
Output #1
pangram
Output #2
not pangram
Explanation
In the first test case, the answer is pangram because the sentence contains all the letters of the English alphabet. The second sentence does not.
Input Format
Input consists of a string
Constraints
Length of can be at most and it may contain spaces, lower case and upper-case letters. Lower-case and upper-case instances of a letter are considered the same.
Output Format
Output a line containing pangram if is a pangram, otherwise output not pangram
Sample Input 0
We promptly judged antique ivory buckles for the next prize
Sample Output 0
pangram
Sample Input 1
We promptly judged antique ivory buckles for the prize
Sample Output 1
not pangram
*/





#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    string sent;
    getline (cin, sent);
    int size1 = sent.length();
    int k;
    for(int i=0;i<size1;i++)
    {
        if(int(sent[i])>=65 && int(sent[i])<=90){
            k=int(sent[i])-65;
        }
        else if(int(sent[i])>=97 && int(sent[i])<=122){
            k=int(sent[i])-97;
        }
        a[k]=1;
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"not pangram"<<endl;
    }
    else{
        cout<<"pangram"<<endl;
    }
}

