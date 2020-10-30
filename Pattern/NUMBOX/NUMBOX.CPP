#include<iostream>
using namespace std;
int main()
{
 int i=0,j=0,k=0,n=0,an=0,tn=0,xn=0;
 cout<<"\nEnter the Number : ";
 cin>>n;
 an=(2*n)-3;
 for(i=0;i<an;i++)
 {
  for(j=0;j<an;j++)
  {
   for(k=0,tn=an-1,xn=n-1;k<an-1;k++,tn--,xn--)
   {
    if(i==k || i==tn || j==k || j==tn)
    {
     cout<<xn<<" ";
     break;
    }
   }
  }
  cout<<"\n\n";
 }
 return 0;
}
