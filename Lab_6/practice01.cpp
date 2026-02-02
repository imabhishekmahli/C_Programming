#include<iostream>
#include<string>
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

  // for(char ch='A';ch<='Z';ch++)
  // {
  //   cout<<ch<<" "<<int(ch)<<endl;
  // }
  // cout<<endl;
  // for(int i=33;i<=125;i++)
  // {
  //   cout<<char(i)<<" "<<i<<endl;
  // }

  // string s1 = "abhishek kumar";
  // cout<<s1;

  // reverse a word

  string s1;
  cin>>s1;
  for(int i=s1.length()-1;i>=0;i--)
  {
    cout<<s1[i];
  }
  return 0;
}