#include <bits/stdc++.h>
using namespace std;

void reverseSentence(string s)
{
  // stack to store words
  stack<string> st;
  string temp = "";

  // traverse whole string
  for (int i = 0; i < s.size(); i++)
  {
    // if blank space is encountered then push temp(one word) in stack
    if (s[i] == ' ')
    {
      st.push(temp);
      temp = ""; // after pushing to stack make temp empty for next word to be stored
    }
    // otherwise keep adding character to temp string;
    else
    {
      temp += s[i];
    }
  }
  // for last word, after last word we will not get blank space
  // it will be left out from pushing in stack so, we do it specially
  st.push(temp);

  // to print output, pop our stack until empty
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  return;
}

int main()
{
  string s = "hey, how are you doing?";
  reverseSentence(s);
  return 0;
}