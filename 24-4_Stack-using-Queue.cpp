//*Stack using two Queues (2 Methods)
// 1) Push is costly

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

  void PUSH(int val)
  {
    q2.push(val);
    N++;
    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }

    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
  }

  void POP()
  {
    q1.pop();
    N--;
  }

  int TOP()
  {
    return q1.front();
  }

  int size()
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
  cout << st.TOP() << endl;
  st.POP();
  cout << st.TOP() << endl;
  st.POP();
  cout << st.TOP() << endl;
  st.POP();
  cout << st.TOP() << endl;
  st.POP();
  return 0;
}