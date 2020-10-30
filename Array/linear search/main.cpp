#include<iostream>
using namespace std;
int linearSearch(int *,int,int);
int main()
{
  int n=0,*arr=NULL,i=0,key=0,result=-1;
  cout<<"Size of Array : ";
  cin>>n;
  arr=(int *)calloc(n,sizeof(int));
  for(i=0;i<n;i++)
  {
    cout<<"Element "<<i+1<<" : ";
    cin>>arr[i];
  }
  cout<<"Elements are : ";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"\nSearch key : ";
  cin>>key;
  result=linearSearch(arr,key,n);
  if(result<0)
  {
    cout<<key<<" not found in array.";
  }
  else
  {
    cout<<key<<" found at index : "<<result;
  }
  return 0;
}
int linearSearch(int *arr,int key,int n)
{
  int i=0;
  for(i=0;i<n;i++)
  {
    if(arr[i]==key)
    {
      return i;
    }
  }
  return -1;
}
