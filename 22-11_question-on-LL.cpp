//*Put even position elements after odd position elements in linked list
// Assuming Position start form 1

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
}

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

//* putting even position node after odd position node
void changePosition(Node *&head)
{
  Node *odd = head;             // odd pointer starts from the head i.e. positon 1
  Node *even = head->next;      // even pointer starts from the next of head i.e. position 2
  Node *evenStart = head->next; // reminder of that from where even positioned node are starting
  while (odd->next != NULL && even->next != NULL)
  {
    odd->next = even->next; // even->next is a odd position node hence it is connected to odd->next
    odd = odd->next;        // odd is positioned at most current odd positioned node
    even->next = odd->next; // odd->next is even postioned node henxe it is connected to even->next
    even = even->next;      // even is updated to most recent even positioned node
  }
  // After all this, in resultant list
  // all even positioned node should be after the odd positioned node
  // odd is now at most recent odd positioned node hence just after even positioned node should start
  odd->next = evenStart;

  // even->next should be NULL as this is supposed to be last node of our LL.
  // lets say in while loop :
  // odd had reached to last element before than even then odd->next == NULL and our loop terminated
  // but even->next is not NULL right now as it should be because of being the last node of LL
  //*take example of list with odd number of nodes

  if (odd->next == NULL)
    even->next == NULL;
}

int main()
{
  Node *head = NULL;
  int arr[] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 6; i++)
  {
    insertAtTail(head, arr[i]);
  }
  cout << "Before Positioning:\n";
  display(head);
  cout << "After Positioning:\n";
  changePosition(head);
  display(head);
  return 0;
}