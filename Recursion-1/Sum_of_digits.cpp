/*Sum of digits (recursive)
Write a recursive function that returns the sum of the digits of a given integer.
Sample Input :
12345
Sample Output :
15
*/

#include <iostream>
using namespace std;

int sum_of_digits(int n)
{
    int d=n%10;
    if(n<10)
    return n;
   // int rec=sum_of_digits(n/10);
    int sc=d+sum_of_digits(n/10);
    return sc;
}
int main()
{int m;
    cin>>m;
    cout<<sum_of_digits(m);
}