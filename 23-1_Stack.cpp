//* Stack - Array Implementation

#include <bits/stdc++.h>
using namespace std;
#define n 100

class Stack
{
  int *arr; // a pointer to hold address of Array
  int top;  // a variable to keep track of top of stack

public:
  Stack()
  {
    arr = new int[n]; // create an array of size n and store its address to arr
    top = -1;         // top is inintialised with -1, when stack is empty
  }
  //* To push element in stack
  void push(int x)
  {
    // stack is full is top is at last index
    if (top == n - 1)
    {
      cout << "Stack Overflow" << endl;
      return;
    }
    // otherwise increse top by one
    top++;
    arr[top] = x; // assign value at that index
  }

  //* To pop element from stack
  void pop()
  {
    // top == -1 => stack is empty
    if (top == -1)
    {
      cout << "Stack is empty" << endl;
    }
    // otherwise simply position back our top by one
    top--;
  }

  //* to get top element
  int Top()
  {
    // see if stack is empty
    if (top == -1)
    {
      cout << "Stack is Empty" << endl;
      return -1;
    }
    // otherwise return element at top index
    return arr[top];
  }

  //* check if stack is empty
  bool empty()
  {
    // top == -1 => 1 if stack is empty => return 1
    // top == -1 => 0 if stack is not empty => return 0;
    return top == -1;
  }
};

int main()
{
  Stack st;
  st.push(1);
  st.push(2);
  st.push(3);
  cout << st.Top() << endl;   // 3
  st.pop();                   // popped 3
  cout << st.Top() << endl;   // 2
  st.pop();                   // popped 2
  st.pop();                   // popped 1
  st.pop();                   // No element to pop
  cout << st.empty() << endl; // is stack empty now YES=> 1
  return 0;
}
