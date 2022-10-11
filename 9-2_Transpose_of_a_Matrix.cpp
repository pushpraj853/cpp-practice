// Given a square matrix A & its number of rows (or columns) N,
// return the transpose of A.
// The transpose of a matrix is the matrix flipped over it's main
// diagonal, switching the row and column indices of the matrix.

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  // transposing
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     if (i < j)
  //     {
  //       int temp = arr[i][j];
  //       arr[i][j] = arr[j][i];
  //       arr[j][i] = temp;
  //     }
  //   }
  // }

  // better
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < m; j++)
    {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}