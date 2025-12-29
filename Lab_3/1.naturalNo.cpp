#include<iostream>
using namespace std;

int natual(int x)
{
  for(int i=1;i<=x;i++)
  {
    cout<<i<<" ";
  }
}

int reverse(int n)
{
  int rev=0;
  while(n>0)
  {
    int last = n%10;
    rev = rev*10 +last;
    n=n/10;
  }
  return rev;
}

int odd(int z)
{
  for(int i=1;i<=z;i++)
  {
    if(i%2!=0)
    {
      cout<<i<<" ";
    }
  }
}

int individual(int a)
{
  while(a>0)
  {
    int digit = a%10;
    cout<<digit<<endl;
    a=a/10;
  }
}

int sum(int a)
{
  int s=0;
  while(a>0)
  {
    int digit = a%10;
    s=s+digit;
    a=a/10;
  }
  return s;
}
int main()
{
  int a;
  cin>>a;
  //cout<<natual(a);
  cout<<endl;
  //cout<<reverse(a);
  cout<<endl;
  //cout<<odd(a);
  //cout<<individual(a);
  cout<<endl;
  cout<<sum(a);
  return 0;
}