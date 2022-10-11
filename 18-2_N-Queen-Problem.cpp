#include <bits/stdc++.h>
using namespace std;

// this function is to check whether or not
// is it safe to put the queen at arr[r][c].
bool issafe(int **arr, int r, int c, int n)
{
  // r and c is the place where we are willing to put our queen.
  // colomn check to the row "r"
  for (int row = 0; row < r; row++)
  {
    if (arr[row][c] == 1)
    {
      return false;
    }
  }

  // upper left diagonal to the top of chessborad
  int row = r;
  int col = c;
  while (row >= 0 && col >= 0)
  {
    if (arr[row][col] == 1)
    {
      return false;
    }
    row--;
    col--;
  }

  // upper right diagonal to the top of chessborad
  int row = r;
  int col = c;
  while (row >= 0 && col < n)
  {
    if (arr[row][col] == 1)
    {
      return false;
    }
    row--;
    col++;
  }

  return true;
}

// this is main function which will perform recursive calls and backtracking
// x == row, y== col, y is not needed here because we can only place one queeen in one row.

// this function is to place a queen in x'th row
bool nQueen(int **arr, int x, int n)
{
  if (x >= n)
  {
    return true;
  }
  // each col of that row is checked to be safe or not
  // then queen is place or backtracked accordingly.
  for (int col = 0; col < n; col++)
  {
    if (issafe(arr, x, col, n))
    {
      arr[x][col] = 1;
      if (nQueen(arr, x + 1, n))
      {
        return true;
      }
      arr[x][col] = 0; // backtracking
    }
  }
  return false;
}

int main()
{
  int n;
  cin >> n;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = new int[n];
    for (int j = 0; j < n; j++)
    {
      arr[i][j] = 0;
    }
  }

  if (nQueen(arr, 0, n))
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}