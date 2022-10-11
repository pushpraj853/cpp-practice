//* in circular linked list the next of last node points to head;

#include <bits/stdc++.h>
using namespace std;
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

//*Insertion at head in circualr linked list
void insertAtHead(Node *&head, int val)
{
  Node *n = new Node(val);
  Node *temp = head;
  // if list is empty
  if (head == NULL)
  {
    n->next = n; // New node should point to itself
    head = n;    // head should point to new Node
    return;
  }
  // if not empty then go till last node, with help of temp
  while (temp->next != head)
  {
    temp = temp->next;
  }
  // now temp is at last
  temp->next = n; // next of temp should point to new node n
  n->next = head; // next of new node should point to whatever head was pointing earlier
  head = n;       // head should point to this new node
}

//* deletion at head
void deleteAtHead(Node *&head)
{
  Node *temp = head;
  // Go till last node using temp;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  Node *todelete = head;   // head is also the first node, so we store the node to be deleted in a variable
  temp->next = head->next; // temp is at last so next of it should point to next of head because head is being deleted
  head = head->next;       // we move head also so we don't loose our head
  delete todelete;         // now all pointers are safely moved so now delete the node
  return;
}

//* Deletion at a position
void deletion(Node *&head, int pos)
{

  // deletion of head node
  if (pos == 1)
  {
    deleteAtHead(head);
    return;
  }

  Node *temp = head;
  int count = 1;
  // otherwise go till just before position node
  //! why till before target position ==>
  // because we are deleting from soomewhere in the middle of the list,
  // hence after deletion we will need to connect the list
  // which is before the deleted node with the node after the deleted node.
  while (count != pos - 1)
  {
    temp = temp->next;
    count++;
  }
  // as we are just before target node
  Node *todelete = temp->next;   // next of it is the node to be deleted, hence store it in a variable
  temp->next = temp->next->next; // now temp should point to next node which is after the target node
  delete todelete;               // finally free up the memory of target node ==> deletion of the node;
}

//* display circular linked list
void display(Node *head)
{
  Node *temp = head;
  // start with temp as head until,
  // and continiously print until temp is reached head again
  do
  {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != head);
  cout << endl;
  //*why do-while?
  // becsuase we need to start from head and end at head.
  // as we make *temp = head first, now if we check condition(temp != head) right after it
  // it will fail immediately, so by doing do-while, we first move our temp from head by one position
  // then check the condition
}

//* Insert at tail in circular linked list
void InsertAtTail(Node *&head, int val)
{

  if (head == NULL)
  {
    insertAtHead(head, val);
    return;
  }

  Node *n = new Node(val);
  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = n;
  n->next = head;
}
int main()
{
}