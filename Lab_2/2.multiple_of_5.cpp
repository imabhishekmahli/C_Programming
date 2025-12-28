#include<iostream>
using namespace std;

int main()
{
  int num;
  cin>>num;
  if(num%5==0){
    cout<<num<<" is multiple of 5"<<endl;
  }else{
    cout<<num<<" is not multiple of 5"<<endl;
  }
  return 0;
}