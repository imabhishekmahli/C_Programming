// lower to upper case
#include<iostream>
#include<string>
using namespace std;

void convertToUpper(char ch[])
{
  int i = 0;
  while(ch[i]!='\0')
  {
    if(ch[i]>='a' && ch[i]<='z')
    {
      ch[i] = ch[i] - 32;
    }
    i++;
  }
}
int main()
{

  char word[100];
  cin>>word;

  convertToUpper(word);
  cout<<word;
}