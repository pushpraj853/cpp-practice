#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;

  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

void PrintLevelOrder(Node *root)
{
  if (root == NULL)
    return;

  // the queue is temporary storage to store nodes at level seperated by NULL
  queue<Node *> q;

  // fot lvl 0 (root node) we do it manually
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    Node *node = q.front();
    q.pop();

    // if the front of queue is not "NULL"
    if (node != NULL)
    {
      // then first we use that popped node itself
      cout << node->data << " ";
      // and then check for left and right child
      if (node->left != NULL)
        q.push(node->left);
      if (node->right != NULL)
        q.push(node->right);
    }
    // after pop we recieve NULL but queue is not empty
    // that one level has been traversed but still there are more to traverse
    else if (!q.empty())
    {
      // then we push NULL in queue to seperate the present lvl in queue with upcoming lvl
      q.push(NULL);
    }
    // but if we recieved NULL and Queue also got emptied
    // then this means whole tree has been traversed.
  }
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  PrintLevelOrder(root);

  return 0;
}