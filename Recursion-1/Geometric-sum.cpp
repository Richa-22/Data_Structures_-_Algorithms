/*Geometric Sum
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion. Return the answer.
Sample Input :
3
Sample Output :
1.875 */

#include <iostream>
#include <cmath>
using namespace std;

double gs(int n)
{
    if(n==0)
    return 1;
    double rec=gs(int (n-1));
    double sc=rec+1/pow(2,(n));
    return sc;
}
int main()
{int n;
    cin>>n;
    cout<<gs(n);
}