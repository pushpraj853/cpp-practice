#include <bits/stdc++.h>
using namespace std;

//*  without storing the reversed stack
// void reverseStack(stack<int> s)
// {
//   if (s.empty())
//     return;
//   int x = s.top();
//   s.pop();
//   reverseStack(s);
//   cout << x << " ";
// }

//*--------------- Mutating the original stack------------

//* to insertAtBottom we use call-memory-stack to push x at bottom
// topele recursively holds all the elements and
// stack becomes empty we push x in stack
// then push back top elements

void insertAtBottom(stack<int> &s, int x)
{
  // if stack is empty push x into stack
  if (s.empty())
  {
    s.push(x);
    return;
  }
  // otherwise store top in a variable
  int topele = s.top();
  s.pop(); // pop the top
  // recursively call the function untill stack is empty
  insertAtBottom(s, x);
  // then push back top element
  s.push(topele);
}

void reverseStack(stack<int> &s)
{
  // when stack becomes empty return
  if (s.empty())
    return;
  // otherwise store top in x
  int x = s.top();
  s.pop(); // pop the top
  // recursively call reverse stack
  reverseStack(s);
  // then for each recursive stack, we'll put x at bottom
  insertAtBottom(s, x);
}

int main()
{
  stack<int> st;
  int arr[] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 6; i++)
  {
    st.push(arr[i]);
  }
  cout << "reversed stack is:\n";
  reverseStack(st);

  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  return 0;
}