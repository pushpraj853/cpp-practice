#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int row, col;
    cin >> row >> col;
    char arr[row][col];
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        cin >> arr[i][j];
      }
    }
    int count = 0, ans = 0;
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        if (arr[i][j] == '#')
        {
          count++;
        }
        else
        {
          count = 0;
        }
        ans = max(ans, count);
      }
    }
    cout << ans << endl;
  }
}