#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int n = s.length();
    int total_substring = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'a' || s[i] == 'z')
        total_substring += (n - i);
      else
      {
        int j = i;
        while (s[j] != 'a' || s[j] != 'z')
          j++;
        total_substring += (n - j);
      }
    }
    cout << total_substring << endl;
  }
}