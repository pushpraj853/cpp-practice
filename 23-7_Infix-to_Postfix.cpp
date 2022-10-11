#include <bits/stdc++.h>
using namespace std;

int precedence(char op)
{
  if (op == '^')
    return 3;
  else if (op == '/' || op == '*')
    return 2;
  else if (op == '+' || op == '-')
    return 1;
  else
    return -1;
}

//*Algorithm for Infix to Postfix Conversion
// for each char in infix string
// 1. if operand =>  print it
// 2. if ( => push to stack
// 3. if ')' => pop the top and print until reach '(' or stack goes empty  //we have to pop '(' also
// 4. if operator => pop the top and print it until an operator of greater precendence is found
//                  or stack goes empty then push the operator
// 5.Atfer for loop if stack not empty yet => pop and print until stack is empty
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

int main()
{
  string s;
  s = "(a-b/c)*(a/k-l)";
  cout << InfixToPostfix(s) << endl;
  return 0;
}