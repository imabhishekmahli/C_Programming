#include<iostream>
using namespace std;

int main()
{
  int arr[1000];
  for(int i=0;i<=1000;i++)
  {
    cin>>arr[i];
  }
  cout<<"elements in array :";
  for(int i=0;i<=1000;i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}