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

//* length of Linked list
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

//* Creating Interesection
void intersect(Node *&head1, Node *&head2, int pos)
{
  Node *temp1 = head1;
  pos--; // why?
  while (pos--)
  {
    temp1 = temp1->next;
  }
  Node *temp2 = head2;
  while (temp2->next != NULL)
  {
    temp2 = temp2->next;
  }
  temp2->next = temp1;
}

//*Finding Intersection of Two Linked list
int findIntersection(Node *&head1, Node *&head2)
{
  int l1 = length(head1);
  int l2 = length(head2);
  int d = 0;
  Node *ptr1;
  Node *ptr2;
  if (l1 > l2)
  {
    d = l1 - l2;
    ptr1 = head1;
    ptr2 = head2;
  }
  else
  {
    d = l2 - l1;
    ptr1 = head2;
    ptr2 = head1;
  }
  while (d)
  {
    ptr1 = ptr1->next;
    if (ptr1 == NULL)
      return -1;
    d--;
  }

  while (ptr1 != NULL && ptr2 != NULL)
  {
    if (ptr1 == ptr2)
    {
      return ptr1->data;
    }
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }
  return -1;
}

int main()
{
  Node *head1 = NULL;
  Node *head2 = NULL;
  insertAtTail(head1, 1);
  insertAtTail(head1, 2);
  insertAtTail(head1, 3);
  insertAtTail(head1, 4);
  insertAtTail(head1, 5);
  insertAtTail(head1, 6);
  insertAtTail(head2, 9);
  insertAtTail(head2, 10);
  intersect(head1, head2, 3);
  display(head1);
  display(head2);
}