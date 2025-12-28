#include<iostream>
using namespace std;

int divby78(int x, int y)
{
  for(int i=x;i<=y;i++)
  {
    if(i%7==0 || i%8==0)
    {
      cout<<i<<" ";
    }
  }
}

int main()
{
  int x,y;
  cin>>x>>y;
  cout<<divby78(x,y);

  return 0;
}