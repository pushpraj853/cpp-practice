#include <bits/stdc++.h>
using namespace std;

int precedence(char c)
{
  if (c == '^')
    return 3;
  else if (c == '*' || c == '/')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

string InfixToPostfix(string s)
{
  string result = "";
  stack<char> st;
  for (int i = 0; i < s.length(); i++)
  {
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
      result += s[i];
    }
    // if opening parenthese is found push it to the stack
    else if (s[i] == '(')
    {
      st.push(s[i]);
    }
    // if closing parenthese is found then
    // pop the stack until opening parenthese
    else if (s[i] == ')')
    {
      while (!st.empty() && st.top() != '(')
      {
        result += st.top();
        st.pop();
      }
      if (!st.empty())
        st.pop(); // popping the opening parenthese
    }
    // operator is found
    else
    {
      // popping the operator from stack whose precedence is greater than found operator
      while (!st.empty() && precedence(st.top()) > precedence(s[i]))
      {
        result += st.top();
        st.pop();
      }
      st.push(s[i]); // as soon we found a operator with lower or equal precedence
      // pushed the fuond operator
    }
  }
  while (!st.empty())
  {
    result += st.top();
    st.pop();
  }
  return result;
}

//*Algorithm for Infix to Prefx Conversion
// 1. reverse the string
// 2. interchange opening-closing parenthese
// 3. apply same algo of postfix
// 4. reverse the result string
string InfixToPrefix(string infix)
{
  // 1.
  reverse(infix.begin(), infix.end());
  // 2.
  for (int i = 0; i < infix.length(); i++)
  {
    if (infix[i] == '(')
    {
      infix[i] = ')';
    }
    else if (infix[i] == ')')
    {
      infix[i] = '(';
    }
  }
  // 3.
  string prefix = InfixToPostfix(infix);
  // 4.
  reverse(prefix.begin(), prefix.end());
  return prefix;
}

int main()
{
  string s;
  s = "(a-b/c)*(a/k-l)";
  cout << InfixToPrefix(s) << endl;
  return 0;
}
