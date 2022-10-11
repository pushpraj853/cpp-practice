#include <bits/stdc++.h>
using namespace std;

//* Creating node of Linked list
class node
{
public:
  int data;
  node *next;

  node(int val) // constructor
  {
    data = val;
    next = NULL;
  }
};

// decleration
//  void insertAtTail(node* x, int y)

// we're just being smart ass right here.
// in argument we're passing simple pointer variable
// head as being a pointer can change value of varible whose address head is storing.
// but we want to control what value head is storing i.e. address of variable stored in head
// for that we need to pass head pointer variable by reference.
// 1st param: node *&head tells value at address of head variable,
// this enables us to change the value of head "by reference"
// because we're making changes in the address of head.(which will be needed for the first node only)
// Another explanation
// int a = 10; int *p = &a;
// using p we can change the value of variable 'a'.
// but normally we want to change the value of "p" in a function that too "by reference"
//// void change(int *&p)
//// {
////   int b = 20;
////   p = &b;
////   //// int *q = &b;
////   //// p = q;
//// }
//// int main()
//// {
////   int a = 10;
////   int *p;
////   p = &a;
////   //// we want to pass this pointer to a function and
////   //// there itself change the value of p i.e. make p to point another variable.
////   //// and that effect should be visible in here main function
////   change(p);
////   cout << *p << endl;
////   return 0;
//// }

//* Insertion at tail of Linked list

void insertAtTail(node *&head, int val) //()
{
  // temp is a pointer of node data type
  node *temp = new node(val); // temp will hold address of newly created node for data val

  if (head == NULL) // if head is Empty => No node in list
  {
    head = temp; // head itself becomes the first node by having the address of temp node
    return;
  }
  // in case list was not empty
  // we don't want to loose our head so we store the address of head in another
  // node data type pointer variable t and traverse the list using this t pointer variable
  node *t = head;
  while (t->next != NULL)
  {
    t = t->next;
  }
  t->next = temp;
}

//* Deletion at head of Linked list

void deleteAtHead(node *&head)
{
  node *todelete = head;
  head = head->next;
  delete todelete;
}

//* Deletioon of a element in Linked list

void deletion(node *&head, int val)
{
  if (head == NULL)
  {
    return;
  }
  if (head->next == NULL) // only one node
  {
    deleteAtHead(head);
    return;
  }
  node *temp = head;
  while (temp->next->data != val)
  {
    temp = temp->next;
  }
  node *todelete = temp->next;
  temp->next = temp->next->next;
  delete (todelete);
}

//* Printing a linked list

void display(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

//! by revresing the linked list we do not mean to
//! swap the data from one position to other but just change pointers of the nodes

//* Reversing a linked list

node *reverse(node *&head)
{
  node *current = head;
  node *prev = NULL;
  node *next = NULL;
  while (current != NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev; // After reversing ends, head is still at old first node
               //  which is now last node after the revrse, and prev is now at our new first node
               //  so we update head to the new first node.
  return head;
}

//* reverse nodes of linked list in groups of size k

node *reverseKnodes(node *head, int k)
{
  // base case
  if (!head)
    return NULL;
  // other wise reverse normally just till k nodes
  node *current = head;
  node *prev = NULL;
  node *next; // not initialising it with any value because
              // in recursive call this will be head.

  int count = 0;
  while (current != NULL && count < k)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    count++;
  }
  // recursive call for (k+1)th node i.e. next pointer
  if (next != NULL)
    head->next = reverseKnodes(next, k);
  return prev;
}

int main()
{
  node *head = NULL;
  //* input for insert
  // insertAtTail(head, 1);
  // insertAtTail(head, 2);
  // insertAtTail(head, 3);
  // display(head);

  //*input for deletion
  // insertAtTail(head, 1);
  // insertAtTail(head, 2);
  // insertAtTail(head, 3);
  // deletion(head, 3);
  // display(head);

  //*input for reverse
  // insertAtTail(head, 1);
  // insertAtTail(head, 2);
  // insertAtTail(head, 3);
  // insertAtTail(head, 4);
  // reverse(head);
  // display(head);

  //*input for k reverse node
  // int k = 2;
  // insertAtTail(head, 1);
  // insertAtTail(head, 2);
  // insertAtTail(head, 3);
  // insertAtTail(head, 4);
  // insertAtTail(head, 5);
  // insertAtTail(head, 6);
  // node *newhead = reverse(head, k);
  // display(newhead);
}