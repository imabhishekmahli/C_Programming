#include<iostream>
using namespace std;

int natual(int x)
{
  for(int i=1;i<=x;i++)
  {
    cout<<i<<" ";
  }
}

int main()
{
  int a;
  cin>>a;
  cout<<natual(a);

  return 0;
}