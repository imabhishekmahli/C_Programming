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

int prime(int n)
{
  int flag=0;
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    cout<<"prime";
  }else{
    cout<<"not prime";
  }
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
  cout<<endl;
  cout<<prime(a);
  return 0;
}