/*Multiplication (Recursive)
Given two integers m & n, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format : m and n (in different lines)

Sample Input :
3 
5
Sample Output -
15 */




#include <iostream>
#include <cmath>
using namespace std;

int mul(int n,int m)
{
    if(n==1)
    return m;
    int rec=mul(int (n-1),m);
    int sc=rec+m;
    return sc;
}
int main()
{int n,m;
    cin>>n;
    cin>>m;
    cout<<mul(n,m);
}