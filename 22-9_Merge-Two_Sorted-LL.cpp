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

void InsertAtTail(Node *&head, int val)
{
  Node *n = new Node(val);

  if (head == NULL)
  {
    head = n;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void display(Node *head)
{
  Node *temp = head;
  while (temp->next != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

//* Merging two sorted Linked List
Node *merge(Node *&head1, Node *&head2)
{
  Node *head3 = NULL;
  Node *temp1 = head1;
  Node *temp2 = head2;
  Node *temp3 = head3;
  while (temp1->next != NULL || temp2->next != NULL)
  {
    if (temp1->data > temp2->data)
    {
      InsertAtTail(head3, temp2->data);
      temp2 = temp2->next;
    }
    else
    {
      InsertAtTail(head3, temp1->data);
      temp1 = temp1->next;
    }
  }
  // copying whichever is remaining
  if (temp1->next != NULL)
  {
    while (temp1->next != NULL)
    {
      InsertAtTail(head3, temp1->data);
      temp1 = temp1->next;
    }
  }
  else if (temp2->next != NULL)
  {
    while (temp2->next != NULL)
    {
      InsertAtTail(head3, temp2->data);
      temp2 = temp2->next;
    }
  }
  return head3;
}

int main()
{
  Node *head1 = NULL;
  Node *head2 = NULL;
  int arr1[] = {1, 3, 5, 7, 9};
  int arr2[] = {2, 4, 6, 8, 10};
  for (int i = 0; i < 5; i++)
  {
    InsertAtTail(head1, arr1[i]);
    InsertAtTail(head2, arr2[i]);
  }
  cout << "before Merge:\n";
  display(head1);
  display(head2);
  cout << "After Merge:\n";
  Node *head3 = merge(head1, head2);
  display(head3);
  return 0;
}