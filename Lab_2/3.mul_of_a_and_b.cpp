#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cin>>a>>b;
  int result = 0;
  for(int i=0;i<b;i++)
  {
    result = result +a;
  }
  cout<<result<<endl;
  return 0;
}