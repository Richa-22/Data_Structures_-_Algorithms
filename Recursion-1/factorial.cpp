#include <iostream>
using namespace std;
 int factorial(int n)
 {
     if(n==0)
     return 1;
     int small_cal=n*factorial(n-1);
     return small_cal;
 }
 
 int main()
 {
  int i;
  cin>>i;
  cout<<factorial(i);
 }