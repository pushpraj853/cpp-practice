// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix
// or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to
// bottom.

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, target;
  cin >> n >> m >> target;
  int arr[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  int row = 0, col = m - 1;
  bool found = false;
  while (row < n && col >= 0)
  {
    if (arr[row][col] == target)
    {
      found = true;
    }
    if (arr[row][col] > target)
      col--;
    else
      row++;
  }
  if (found)
    cout << "found" << endl;
  else
    cout << "not found" << endl;

  return 0;
}

// we start from top right corner and
// if value there is less than target then move left i.e col--
// or if value is greater than target then move right i.e. row++;

// we can start from any other corner except for top left