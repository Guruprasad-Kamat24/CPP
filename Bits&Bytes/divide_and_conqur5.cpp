/*
Given a square strawberry wafer, two students, Ramu and Shamu, are determining how to share it with themselves.
 Each of the squares on the strawberry wafer has an integer on it.
Ramu decides to share a contiguous segment of the wafer selected such that:
The length of the selected segment matches Shamu's birth month, and, The sum of the integers on the squares is equal to his birth day.
You must determine in how many ways he can divide the strawberry wafer
Consider the strawberry wafer as an array of squares, s = [3,1,2,9,1]. He wants to find segments that will sum to Shamu's birth day,
d = 5 with a length equalling his birth month, m = 2. In this case, there is one segment meeting his criteria: [3,2].
Birthday has the following parameter(s):
s: an array of integers, the numbers on each of the squares of strawberry wafer
d: an integer, Shamu's birth day
m: an integer, Shamu's birth month
Sample Input 0
5
1 2 1 3 2
3 2
Sample Output 0
2
Explanation 0
Ramu wants to give Shamu m = 2 squares summing to d = 3. The following two segments meet the criteria: [1,2] and [2,1].
Sample Input 1
6
1 1 1 1 1 1
3 2
Sample Output 1
0
Explanation 1
Ramu only wants to give Shamu m = 2 consecutive squares of strawberry wafer whose integers sum to d = 3.
There are no possible pieces satisfying these constraints: Thus, we print 0 as our answer.
Sample Input 2
1
4
4 1
Sample Output 2
1
Explanation 2
Ramu only wants to give Shamu m = 1 square of strawberry with an integer value of d = 4.
Because the only square of strawberry in the wafer satisfies he constraint, we print 1 as our answer
Input Format
The first line contains an integer n, the number of squares in the strawberry wafer.
The second line contains n space-separated integers s[i], the numbers on the strawberry wafer
squares where 0 ≤ i ≤ n.
The third line contains two space-separated integers, d and m, Shamu's birth day and his birth month.
Constraints
1 ≤ n ≤ 100
1 ≤ s[i] ≤ 5, where (0 ≤ i < n)
1 ≤ d ≤ 31
1 ≤ m ≤ 12
Output Format
Print an integer denoting the total number of ways that Ramu can portion his strawberry wafer to share with Shamu.
Sample Input 0
5
1 2 1 3 2
3 2
Sample Output 0
2
Sample Input 1
6
1 1 1 1 1 1
3 2
Sample Output 1
0
Sample Input 2
1
4
4 1
Sample Output 2
1
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d,m;
    cin>>d>>m;
    int count=0;
    for(int i=0;i<n-m+1;i++)
    {
        int sum=0;
        for(int j=i;j<i+m;j++)
        {
            sum+=a[j];
        }
        if(sum==d)
        {
            count+=1;
        }
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

