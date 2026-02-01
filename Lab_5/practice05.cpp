#include<iostream>
#include<vector>
using namespace std;

void Search(vector<int> &arr,int target)
{
  int temp = 0;
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]==target)
    {
      temp = 1;
    }
  }
  if(temp==0){
    cout<<"not found";
  }else{
    cout<<"found";
  }
}
int main()
{
  vector<int> v1;
  int n;
  int element;
  int target;
  cout<<"enter size of vector :";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>element;
    v1.push_back(element);
  }
  Search(v1,4);
  return 0;
}