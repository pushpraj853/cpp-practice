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
    char count[26];
    for (int i = 0; i < 26; i++)
    {
      count[i] = 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
      count[int(str[i]) - 97] += 1;
    }

    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
      if (count[i] % 2 == 1)
      {
        flag = false;
        cout << "NO" << endl;
        break;
      }
    }
    if (flag)
      cout << "YES" << endl;
  }
}