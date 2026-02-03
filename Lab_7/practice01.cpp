#include<iostream>
using namespace std;

int main()
{
  // int a = 10;
  // cout<<"value in a :"<<a<<endl;
  // cout<<"address of a :"<<&a<<endl;

  int arr[10];
  cout<<arr[0]<<endl;
  cout<<&arr[0]<<endl;
  cout<<arr<<endl;
  cout<<arr+1<<endl; //integer takes 4 bits
  cout<<arr+2<<endl;

  string a[10];
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<&a+1<<endl;
  cout<<&a+2<<endl;
  return 0;
}