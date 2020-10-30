#include<iostream>
using namespace std;
int main()
{
  int *arr=NULL;
  int n=0,pos=0,element=0;
  cout<<"Size of Array : ";
  cin>>n;
  arr=(int*)calloc(n,sizeof(int));
  for(int i=0;i<n;i++)
  {
    cout<<"Element "<<i+1<<" : ";
    cin>>arr[i];
  }
  cout<<"Elements are : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  arr=(int*)realloc(arr,(n+1)*sizeof(int));
  cout<<"\nEnter position : ";
  cin>>pos;
  cout<<"Enter element : ";
  cin>>element;
  for(int i=n;i>pos;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[pos]=element;
  n++;
  cout<<"Elements are : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
