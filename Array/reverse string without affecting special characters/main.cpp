#include<iostream>
using namespace std;
bool isAlpha(char);
int main()
{
  string str="a*bcd,e$";
  int n=str.length(),i,j;
  cout<<str<<"\n";
  i=0;
  j=n-1;
  while(i<j)
  {
    char temp;
    while(!isAlpha(str[i]) && i<j && i<n)
    {
      i++;
    }
    while(!isAlpha(str[j]) && i<j && j>=0)
    {
      j--;
    }
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
  }
  cout<<str;
}
bool isAlpha(char c)
{
  if((c>='A' && c<='Z') || (c>='a' && c<='z'))
  {
    return true;
  }
  return false;
}
