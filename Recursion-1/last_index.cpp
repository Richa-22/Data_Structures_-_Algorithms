#include <iostream>
using namespace std;
int last_index(int *a,int size,int x)
{
  if(size==0)
  return -1;
  //if(a[0]==x)
  //return 0;
  int rec=last_index(a+1, size-1, x);
      if(rec==-1)
      {
         if(a[0]==x)
         return 0;
         else
         return -1;
      }
      else
      return rec+1;
  
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
    cout<<"enter number of which index is to be found:";
    cin>>x;
    cout<<first_index(arr,n,x);
}
