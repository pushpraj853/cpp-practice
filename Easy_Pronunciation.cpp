#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string str;
    cin >> str;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        count = 0;
      else
      {
        count++;
        if (count >= 4)
        {
          cout << "NO" << endl;
          break;
        }
      }
    }
    if (count < 4)
      cout << "YES" << endl;
  }

  return 0;
}