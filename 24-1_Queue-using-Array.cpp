#include <bits/stdc++.h>
using namespace std;
#define n 20

class Queue
{
  int *arr;
  int front;
  int back;

public:
  Queue()
  {
    arr = new int[n];
    front = -1;
    back = -1;
  }

  //* deletion in queue
  void enqueue(int val)
  {
    // checking if queue is full
    if (back == n - 1)
    {
      cout << "queue overflow\n";
      return;
    }
    // otherwise increment back and assign value to that index
    back++;
    arr[back] = val;

    // in case of first element front should also increase from -1 to 0
    if (front == -1)
    {
      front++;
    }
  }

  //* deletion from queue.
  // (front == -1) => empty queue;
  // (front > back) => queue is empty (assume continuous deletion from queue)
  // (front == back != -1) => one element in queue;
  void dequeue()
  {
    // if queue is empty
    if (front == -1 || front > back)
    {
      cout << "nothing to delete, queue is empty\n";
      return;
    }
    // otherwise simly increase front by 1
    front++;
  }

  //* Peek => gives the element at front
  int peek()
  {
    // if queue is empty
    if (front == -1 || front > back)
    {
      cout << "queue is empty\n";
      return -1;
    }
    return arr[front];
  }

  //* Checking if queue is empty;
  bool empty()
  {
    // if queue is empty
    if (front == -1 || front > back)
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
    q.enqueue(arr[i]);
  }

  for (int i = 0; i < 7; i++)
  {
    cout << q.peek() << endl;
    q.dequeue();
  }

  cout << q.empty() << endl;

  return 0;
}