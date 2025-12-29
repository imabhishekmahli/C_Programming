#include<iostream>
using namespace std;

void pattern1(int x)
{
  for(int i=1;i<=x;i++)
  {
    for(int j=1;j<=x;j++)
    {
      cout<<" * ";
    }
    cout<<endl;
  }
}

void pattern2(int x)
{
  for(int i=1;i<=x;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<" * ";
    }
    cout<<endl;
  }
}

void pattern3(int x)
{
  for(int i=1;i<=x;i++)
  {
    for(int j=x;j>=i;j--)
    {
      cout<<" * ";
    }
    cout<<endl;
  }
}

void pattern4(int x)
{
  for(int i=1;i<=x;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int n;
  cin>>n;
  //pattern1(n);
  //pattern2(n);
  //pattern3(n);
  pattern4(n);
  return 0;
}