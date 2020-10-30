#include<iostream>
using namespace std;
int main()
{
 int n=0,h,i=0,j=0;//h -> half of n
 const int x=24;// x -> number of DNA strands (lines)
 char a[x][2];
 cout<<"Enter the number : ";
 cin>>n;
 cout<<"\n\n";
 if(n%2==1)
 {
  cout<<"Please enter even number\nProgram Terminated .. .. ..\n";
  return 0;
 }
 h=(n/2);
 //Random DNA Sequence Generation
 for(i=0;i<x;i++)
 {
  for(j=0;j<2;j++)
  {
   char temp='A';
   if(i%2==0 && (j+1)%2==0)
   {
    temp='A';
   }
   else if(i%2==0 && (j+1)%2==1)
   {
    temp='T';
   }
   else if(i%2==1 && (j+1)%2==0)
   {
    temp='G';
   }
   else if(i%2==1 && (j+1)%2==1)
   {
    temp='C';
   }
   a[i][j]=temp;
  }
 }
 //Random DNA Sequence Generation
 for(i=0;i<x;i++)
 {
  if(i%n<h)
  {
   for(j=0;j<(h-(i%h)-1);j++)
   {
    cout<<" ";
   }
  }
  else
  {
   for(j=0;j<(i%h);j++)
   {
    cout<<" ";
   }
  }
  cout<<a[i][0];
  if(i%n<h)
  {
   for(j=0;j<(i%h);j++)
   {
    cout<<"--";
   }
  }
  else
  {
   for(j=0;j<(h-(i%h)-1);j++)
   {
    cout<<"--";
   }
  }
  cout<<a[i][1];
  cout<<"\n";
 }
 return 0;
}
