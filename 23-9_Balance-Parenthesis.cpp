#include <bits/stdc++.h>
using namespace std;

bool balanceParenthesis(string s)
{
  stack<char> st;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '{' || s[i] == '(' || s[i] == '[')
    {
      st.push(s[i]);
    }
    else
    {
      if (st.empty())
        return false;
      else if (s[i] == '}' && st.top() == '{')
      {
        st.pop();
        continue;
      }
      else if (s[i] == ')' && st.top() == '(')
      {
        st.pop();
        continue;
      }
      else if (s[i] == ']' && st.top() == '[')
      {
        st.pop();
        continue;
      }
      else
        return false;
    }
  }
  // After all that stack should be empty
  if (st.empty())
    return true;
  else
    return false;
}

int main()
{
  string s;
  s = "{([])}}}}";
  cout << balanceParenthesis(s) << endl;
  return 0;
}