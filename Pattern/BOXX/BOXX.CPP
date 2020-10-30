#include<iostream>
using namespace std;
int main()
{
 int i=0,j=0,n=20;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i==0 || j==0 || i==(n-1) || j==(n-1) || i==j || (i+j)==(n-1))
   {
    cout<<"*"<<" ";
   }
   else
   {
    cout<<" "<<" ";
   }
  }
  cout<<"\n";
 }
 return 0;
}
