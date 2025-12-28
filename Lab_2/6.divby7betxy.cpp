#include<iostream>
using namespace std;

int divBy7(int x , int y)
{
  for(int i=x;i<=y;i++)
  {
    if(i%7==0)
    {
      cout<<i<<" ";
    }
  }
}

int main()
{
  int x,y;
  cin>>x>>y;
  cout<<divBy7(x,y);
  return 0;
}