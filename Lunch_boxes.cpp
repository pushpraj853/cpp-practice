#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int count = 0;
    int school[m];
    for (int i = 0; i < m; i++)
    {
      cin >> school[i];
    }
    sort(school, school + m);
    // for (int i = 0; i < m; i++)
    // {
    //   cout << school[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < m; i++)
    {
      if (school[i] <= n)
      {
        n = n - school[i];
        count++;
      }
      else
        break;
    }
    cout << count << endl;
  }
}