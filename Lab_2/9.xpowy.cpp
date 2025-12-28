#include<iostream>
using namespace std;

int pow(int x, int y)
{
  int result =1;
  for(int i=0;i<y;i++)
  {
    result = result * x;
  }
  return result;
}

int main()
{
  int x,y;
  cin>>x>>y;
  cout<<pow(x,y);
  return 0;
}