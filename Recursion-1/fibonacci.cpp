#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
    return 0;
     if (n==1)
    return 1;

            int small_cal=fibonacci(n-1)+fibonacci(n-2);
        return small_cal;/* code */
    
    
}
int main()
{
    int i;
    cin>>i;
    cout<<fibonacci(i);

}