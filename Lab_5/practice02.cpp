//smallest element in array
#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  cout<<"elements in array :";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"smallest element is :";
  int smallestElement = arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[0]>arr[i])
    smallestElement = arr[i];
  }

  cout<<smallestElement;
  return 0;
}