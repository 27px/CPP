#include<iostream>
using namespace std;
int main()
{
 int i=0,j=0,x=2,y=1,n=4,z=n,o=1,r=0,b=1;
 for(x=2,y=1,z=n,r=0,b=0;x>-1;x--,y++,z++,o+=2,r+=2,b++)
 for(i=0;i<n;i++)
 {
  for(j=(0-(n*x));j<(z*2*y);j++)
  {
   if(j<((n*1)-i+r+b))
   cout<<"  ";
   else if(j<=(i+(n*y)+r-b))
   cout<<"* ";
  }
  cout<<"\n";
 }
 for(i=0;i<n;i++)
 {
  for(j=(0-(n*x));j<(z*2*y);j++)
  {
   if(j<((n*1)+r+b+2))
   cout<<"  ";
   else if(j<=((n*y)+r-b-2))
   cout<<"* ";
  }
  cout<<"\n";
 }
 return 0;
}
