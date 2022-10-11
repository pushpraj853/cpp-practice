#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string str;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n - 1; i = i + 2)
    {
      char temp;
      temp = str[i];
      str[i] = str[i + 1];
      str[i + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
      str[i] = char(122 - (int(str[i]) - 97));
    }
    cout << str << endl;
  }
  return 0;
}
