// Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your
// task is to multiply these matrices and output the multiplied matrix.

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, p;
  cin >> n >> m >> p;
  int m1[n][m];
  int m2[m][p];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> m1[i][j];
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < p; j++)
    {
      cin >> m2[i][j];
    }
  }

  int m3[n][p];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      m3[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      for (int k = 0; k < m; k++)
      {
        m3[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      cout << m3[i][j] << " ";
    }
    cout << endl;
  }
}