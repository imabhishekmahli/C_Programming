#include<iostream>
using namespace std;

int main()
{
  // char ch = 'A';
  // cout<<ch<<endl;
  // cout<<int(ch)<<endl;
  // ch = ch + 1;
  // cout<<ch<<endl;
  // cout<<int(ch)<<endl;
  // ch = ch+24;
  // cout<<ch<<endl;
  // cout<<int(ch)<<endl;

  for(char ch='A';ch<='Z';ch++)
  {
    cout<<ch<<" "<<int(ch)<<endl;
  }
  cout<<endl;
  for(int i=33;i<=125;i++)
  {
    cout<<char(i)<<" "<<i<<endl;
  }
  return 0;
}