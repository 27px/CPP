#include<iostream>
using namespace std;
int main()
{
 int n=0,i=0,j=0;
 cout<<"Enter the number : ";
 cin>>n;
 cout<<"\n\n";
 for(i=0;i<(2*n);i++)
 {
  for(j=0;j<(2*n);j++)
  {
   if(j<(n-i) || j>(n+i-1) || ((i>=n) && (j<=(i-n) || (j>=((3*n)-i-1)))))
   {
    cout<<"* ";
   }
   else
   {
    cout<<"  ";
   }
  }
  cout<<"\n";
 }
 return 0;
}
