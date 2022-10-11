#include <bits/stdc++.h>
using namespace std;

//* Algorithm:
// read from left to right
// if operand is found push to stack;
// else => operator then, pop two elements from the stack
// first pop from stack works as second operand of the operator (first_oprnd -op- sec_oprnd)
// second pop is first operand for the operator
// use switch case to perform opertion right away
// push result to stack;
// return top as result

int postfixEvaluation(string s)
{
  stack<int> st;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= '0' && s[i] <= '9')
    {
      st.push(s[i] - '0');
    }
    else
    {
      int op2 = st.top(); //* in postfix the top of stack is the second operator
      st.pop();
      int op1 = st.top();
      st.pop();
      switch (s[i])
      {
      case '+':
        st.push(op1 + op2);
        break;
      case '-':
        st.push(op1 - op2);
        break;
      case '*':
        st.push(op1 * op2);
        break;
      case '/':
        st.push(op1 / op2);
        break;
      case '^':
        st.push(pow(op1, op2));
        break;
      default:
        break;
      }
    }
  }
  return st.top();
}
int main()
{
  string s;
  s = "46+2/5*7+";
  cout << postfixEvaluation(s);
  return 0;
}