// two sum
#include<iostream>
#include<vector>
using namespace std;

void arraySum(vector<int> &arr, int sum)
{
  int temp=0;
  for(int i=0;i<=arr.size();i++)
  {
    for(int j=0;j<=arr.size();j++)
    {
      if(arr[i]+arr[j]==sum)
      {
        temp = 1;

      }
    }
  }
  if(temp==0)
  {
    cout<<"no pair.";
  }else{
    cout<<"yes pair.";
  }
}
int main()
{
  vector<int> v1;
  int n;
  int element;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>element;
    v1.push_back(element);
  }
  arraySum(v1,50);
  return 0;
}