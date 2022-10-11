//*Stack Using Queue
// 2) Pop is Costly
//* q1 is main protagonist here

#include <bits/stdc++.h>
using namespace std;

class Stack
{
  int N;
  queue<int> q1;
  queue<int> q2;

public:
  Stack()
  {
    N = 0;
  }
  //* Insert in Stack using queue
  void PUSH(int val)
  {
    q1.push(val);
    N++;
  }

  //* Delete from Stack using queue
  void POP()
  {
    // if q1 is empty return
    if (q1.empty())
    {
      return;
    }
    // otherwise keep last element in q1 and transfer rest to q2
    while (q1.size() != 1)
    {
      q2.push(q1.front());
      q1.pop();
    }
    // pop that last remaining element of q1
    q1.pop();
    N--; // decrease the size of stack

    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
  }

  //* Getting top of the stack
  // All same story of deletion, just that
  // rather than deleting the last remaining element of q1
  // we'll push it too in q2 as well, and then transfer all back to q1
  // because we're looking at top element of stack, not deleting anything
  int TOP()
  {
    if (q1.empty())
    {
      return -1;
    }
    while (q1.size() != 1)
    {
      q2.push(q1.front());
      q1.pop();
    }
    int top = q1.front(); // storing the last remaining of q1
    q2.push(top);         // pushing it too in the q2

    // swapping all the element back to q1
    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;

    return top;
  }

  int SIZE()
  {
    return N;
  }
};

int main()
{
  Stack st;
  st.PUSH(1);
  st.PUSH(2);
  st.PUSH(3);
  st.PUSH(4);
  st.PUSH(5);

  cout << "size: " << st.SIZE() << endl;
  cout << " Top: " << st.TOP() << endl;
  st.POP();
  cout << "After PoP\n";
  cout << "size: " << st.SIZE() << endl;
  cout << " Top: " << st.TOP() << endl;
  return 0;
}