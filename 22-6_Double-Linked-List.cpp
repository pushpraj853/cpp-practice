// Doubly Linked list :
// prev of 1st node and next of Last node points to NULL in DLL
// head means 1st node of the linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
    prev = NULL;
  }
};

//* Insert At head
void insertAtHead(Node *&head, int val)
{
  Node *n = new Node(val);
  // head was pointing to 1st node,
  // now this new node will point to First node and
  // It itself will become the first node
  n->next = head;

  // and if this new node is not the only node then,
  // then prev of old-1st node should point to this new 1st node
  if (head != NULL)
    head->prev = n;

  head = n;
}

// Insert At end
void insertAtTail(Node *&head, int val)
{
  if (head == NULL)
  {
    insertAtHead(head, val);
    return;
  }
  Node *n = new Node(val);
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
  n->prev = temp;
}

//* Delete 1st node/Head Node of the DLL
void deleteAtHead(Node *&head)
{
  Node *todelete = head;
  head = head->next;
  head->prev = NULL;

  delete todelete;
}

//*delete a node from doubly linked list by position
void deletion(Node *&head, int pos)
{
  if (pos == 1)
  {
    deleteAtHead(head);
    return;
  }

  Node *temp = head;
  int count = 1;
  // temp is the node that we want to delete
  // we are reching there by this loop
  while (temp != NULL && count != pos)
  {
    temp = temp->next;
    count++;
  }
  temp->prev->next = temp->next;
  // this condition is to ensure that temp is not the last node.
  // because the prev of last node also points to NULL
  if (temp->next != NULL)
  {
    temp->next->prev = temp->prev;
  }

  delete temp;
}

//* Display
void display(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " <-> ";
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
  display(head);
  return 0;
}