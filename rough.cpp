#include <bits/stdc++.h>
using namespace std;

string helper(string str)
{
  int n = str.length();
  string final = "";
  char x = str[0];
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (str[i] == x)
    {
      count++;
    }
    else
    {
      final += (x + to_string(count));
      x = str[i];
      count = 1;
    }
  }
  final += (x + to_string(count));
  return final;
}

string countAndSay(int n)
{
  if (n == 1)
    return "1";

  string ans = "1";
  for (int i = 2; i <= n; i++)
  {
    ans = helper(ans);
  }
  reverse(ans.begin(), ans.end());

  return ans;
}

int main()
{
  int n = 4;
  string result = countAndSay(5);
  // reverse(result.begin(), result.end());
  cout << result;
  return 0;
}