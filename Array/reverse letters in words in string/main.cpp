#include<iostream>
using namespace std;
string csreverse(string s)
{
  string rev=s;
  for(int back=s.length()-1,start=0;back>=0;back--,start++)
  {
    rev[start]=s[back];
  }
  return rev;
}
int main()
{
  string str,res="";
  string s1="apple";
  int n=0;
  cout<<"Enter the sentence.\n";
  getline(cin,str);
  n=str.length();
  for(int i=0,p=0;i<n;i++)
  {
    if(str[i]==' ' || i==n-1)
    {
      if(i==n-1)
      {
        i++;
      }
      if(p!=0)
      {
        res.append(" ");
      }
      res.append(csreverse(str.substr(p,i-p)));
      p=i+1;
    }
  }
  cout<<"\nWord reverse of \""<<str<<"\" is \""<<res<<"\"\n";
  return 0;
}
