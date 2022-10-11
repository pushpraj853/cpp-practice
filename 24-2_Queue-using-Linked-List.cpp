#include <bits/stdc++.h>
using namespace std;
// in LL implementatioo of queue, front == NULL => Queue is Empty
class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

class Queue
{
  Node *front;
  Node *back;

public:
  Queue()
  {
    front = NULL;
    back = NULL;
  }

  //*Inserting ELement into Queue
  void push(int x)
  {
    Node *n = new Node(x);
    if (front == NULL)
    {
      front = back = n;
      return;
    }

    back->next = n;
    back = n;
  }

  //* Deleting Element from the queue
  void pop()
  {
    if (front == NULL) // Queue is Empty
    {
      cout << "Queue is Empty, nothing to Delete\n";
      return;
    }
    Node *todelete = front;
    front = front->next;
    delete todelete;
  }

  //* Peek => return element at front
  int peek()
  {
    if (front == NULL) // Queue is Empty
    {
      cout << "Queue is Empty\n";
      return -1;
    }
    return front->data;
  }

  //* Empty
  bool isEmpty()
  {
    if (front == NULL)
      return true;
    else
      return false;
  }
};

int main()
{
  Queue q;
  int arr[] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 6; i++)
  {
    q.push(arr[i]);
  }

  for (int i = 0; i < 7; i++)
  {
    cout << q.peek() << endl;
    q.pop();
  }

  cout << q.isEmpty() << endl;

  return 0;
}