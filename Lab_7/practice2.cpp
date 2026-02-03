#include<iostream>
using namespace std;

void removeLastDigit(int a[], int low, int high)
{
  for(int i=low;i<=high;i++)
  {
    a[i]=a[i]/10;
  }
}
int main()
{
  int a[] = {123,34,7,9232};
  int n = 4;
  removeLastDigit(a,0,n-1);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}