#include <bits/stdc++.h>
using namespace std;
//* creating node
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

//*Insetion at end of LL
void insertAtTail(Node *&head, int val)
{
  Node *temp = new Node(val);

  if (head == NULL)
  {
    head = temp;
    return;
  }

  Node *t = head;
  while (t->next != NULL)
  {
    t = t->next;
  }
  t->next = temp;
  return;
}

//* Creating Cycle
void makeCycle(Node *&head, int pos)
{
  Node *temp = head;
  Node *startNode;
  int count = 1;
  // finding start node of Cycle;
  // given the condition of while even when we find our start node
  // we'll continue to traverse and reach temp at last node when the loop ends
  while (temp->next != NULL)
  {
    if (count == pos)
    {
      startNode = temp;
    }
    temp = temp->next;
    count++;
  }
  // out of while loop, temp is at last node
  // with this last node we want to point/connect to the start node to create cycle;
  temp->next = startNode;
}

//* Detect Cycle
bool detectCycle(Node *&head)
{
  Node *slow = head;
  Node *fast = head;
  // as fast will be moving ahead with extra step
  // hence it may reach to NULL, first also
  // and if Fast doesn't meets with slow and reaches to end of list i.e NULL
  // then it means no cycle is present
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;       // tortoise: moving one step at a time
    fast = fast->next->next; // hare: moving 2 step a time
    if (fast == slow)        // if tortoise and hare meet that mean cycle is present
    {
      return true;
    }
  }
  return false;
}

//* Remove Cycle
// As they meet and imply cycle is present,
// send one of them to the head(let say hare) and again start moving
// but this time both will move one step at a time
// at any point where the next of both point to same node
// make next of Tortoise to NULL.
void removeCycle(Node *&head)
{
  Node *slow = head;
  Node *fast = head;
  // assuming that cycle is present we first want to
  // reach the point where they both(fast and slow) meet.
  do
  {
    slow = slow->next;
    fast = fast->next->next;
  } while (slow != fast);

  fast = head;
  while (slow->next != fast->next)
  {
    slow = slow->next;
    fast = fast->next;
  }
  slow->next = NULL;
}

//* Printing a linked list
void display(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main()
{
  Node *head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  insertAtTail(head, 4);
  insertAtTail(head, 5);
  insertAtTail(head, 6);
  makeCycle(head, 4);
  // display(head);  // to see cycle
  cout << detectCycle(head) << "\n"; // 1 if cycle is present, 0 if cycle is not present
  removeCycle(head);
  cout << detectCycle(head) << "\n";
  display(head);
}