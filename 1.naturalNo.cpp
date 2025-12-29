#include<iostream>
using namespace std;

int natualNo(int n)
{
  for(int i=1;i<=n;i++)
  {
    cout<<i<<" ";
  }
}

int reverse(int n)
{
  for(int i=n;i>=1;i--)
  {
    cout<<i<<" ";
  }
}

int printodd(int n)
{
  for(int i=1;i<=n;i++)
  {
    if(i%2!=0)
    {
      cout<<i<<" ";
    }
  }
}
int main()
{
  int n;
  cin>>n;
  cout<<natualNo(n);
  cout<<endl;
  cout<<reverse(n);
  cout<<endl;
  cout<<printodd(n);
}