#include<iostream>
using namespace std;

int table(int x)
{
  for(int i=1;i<=10;i++)
  {
    cout<<x<<" * "<<i<<" = "<<x*i<<endl;
  }
}
int main()
{
  int x;
  cin>>x;
  cout<<table(x);
  return 0;
}