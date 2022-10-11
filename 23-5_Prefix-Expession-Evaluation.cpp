#include <bits/stdc++.h>
using namespace std;

//*Algorihtm:
// read from right to left
// if operand is found push to stack
// else => operator then pop two operand from stack,
// using switch case base on operator perform respective operation on operands
// then push back result into the stack
// at end return top of stack
int prefixEvaluation(string s)
{
  stack<int> st;
  for (int i = s.length() - 1; i >= 0; i--)
  {
    if (s[i] >= '0' && s[i] <= '9')
    {
      st.push(s[i] - '0');
    }
    else
    {
      int op1 = st.top();
      st.pop();
      int op2 = st.top();
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
  s = "-+7*45+20";
  cout << prefixEvaluation(s) << endl;
  return 0;
}