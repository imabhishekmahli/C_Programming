#include<iostream>
using namespace std;

vector<vector<int>> inputMatrix(int row, int col)
{
    vector<vector<int>> mat(row, vector<int>(col));
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            cin >> mat[i][j];

    return mat;
}

int main()
{
  int row;
  int col;
  cin>>row;
  cin>>col;
  vector<vector<int>> mat(row, vector<int>(col));

  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin>>mat[i][j];
    }
  }
  cout<<"elements in matrix :"<<endl;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}