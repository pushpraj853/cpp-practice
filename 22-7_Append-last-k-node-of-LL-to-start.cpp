#include <bits/stdc++.h>
using namespace std;

//* Creating node of Linked list
class Node
{
public:
  int data;
  Node *next;

  Node(int val) // constructor
  {
    data = val;
    next = NULL;
  }
};

//* Insertion at tail of Linked list
void insertAtTail(Node *&head, int val) //()
{
  // temp is a pointer of Node data type
  Node *temp = new Node(val); // temp will hold address of newly created node for data val

  if (head == NULL) // if head is Empty => No node in list
  {
    head = temp; // head itself becomes the first node by having the address of temp node
    return;
  }
  // in case list was not empty
  // we don't want to loose our head so we store the address of head in another
  // node data type pointer variable t and traverse the list using this t pointer variable
  Node *t = head;
  while (t->next != NULL)
  {
    t = t->next;
  }
  t->next = temp;
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

int length(Node *head)
{
  int l = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    l++;
    temp = temp->next;
  }
  return l;
}

//* K append last k node to start of the list
// l is complete length of the list
// k is length of nodes we want to append
Node *Kappend(Node *&head, int k)
{
  int l = length(head);
  k = k % l;
  Node *newHead;
  Node *newTail;
  Node *tail = head;
  int count = 1;
  while (tail->next != NULL)
  {
    if (count == l - k)
    {
      newTail = tail;
    }
    if (count == l - k + 1)
    {
      newHead = tail;
    }
    tail = tail->next;
    count++;
  }
  newTail->next = NULL;
  tail->next = head;
  return newHead;
}

int main()
{
  Node *head = NULL;
  int arr[] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 6; i++)
  {
    insertAtTail(head, arr[i]);
  }
  display(head);
  Node *newHead = Kappend(head, 3);
  display(newHead);
  return 0;
}