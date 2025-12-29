#include<iostream>
using namespace std;
// this can be done using string and vector 
int individual(int n)
{
  while(n>0)
  {
    int last = n%10;
    cout<<last<<endl;
    n=n/10;
    if(n==0)
    {
      break;
    }
  }
  //n=n%10;
  return n;
}
int main()
{
  int n;
  cin>>n;
  cout<<individual(n);

  return 0;
}