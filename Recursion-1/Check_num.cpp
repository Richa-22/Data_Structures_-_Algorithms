/*Check Number
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
true or false
Constraints :
1 <= N <= 10^3
Sample Input :
3
9 8 10
8
Sample Output :
true

/***************************************************** SOLUTION **************************************************************************/
#include <iostream>
using namespace std;
 int check_num(int *a,int size,int x)
 {
     if(size==0)
     return 0;
     int rec=check_num((a+1),(size -1),x);
     if(a[0]==x)
     rec= rec+1;
     else{
     rec= rec+0;}
     // char rec=check_num((a+1),(size -1),x);
      //return (rec==true)?true:false;
    return rec;

 }
 int main()
{
   int n;
   cout<<"Enter length of array:";
   cin>>n;
    int* arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter number of which is to be found:";
    cin>>x;
    int a=check_num(arr,n,x);
    if(a!=0)
    cout<<"true";
    else
    cout<<"false";
}