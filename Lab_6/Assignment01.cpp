#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s1;
  cin>>s1;

  int smallLetter = 0;
  int capitalLetter = 0;

  for(int i=0;i<s1.length();i++)
  {
    if(s1[i]>='A' && s1[i]<='Z')
    {
      capitalLetter++;
    }
    else if(s1[i]>='a' && s1[i]<='z')
      {
        smallLetter++;
      }
    
  }
  cout<<capitalLetter<<endl;
  cout<<smallLetter<<endl;
  return 0;
}