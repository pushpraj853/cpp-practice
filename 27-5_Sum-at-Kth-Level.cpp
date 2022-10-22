#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

int sumAtK(Node *root, int k)
{
  if (root == NULL)
    return -1;

  queue<Node *> q;
  // push the root node to start with
  q.push(root);
  q.push(NULL);
  // root node is at level 0
  int level = 0;
  int sum = 0;

  while (!q.empty())
  {
    Node *node = q.front();
    q.pop();

    // if front of queue is not NULL => some node
    if (node != NULL)
    {
      // if we are at level k;
      if (level == k)
      {
        sum += node->data;
      }
      if (node->left != NULL)
        q.push(node->left);
      if (node->right != NULL)
        q.push(node->right);
    }
    // if it is NULL then we must check, has queue also gone empty ?
    //=> YES=>tree has been traversed.
    //=> NO=>there are level remaining.
    else if (!q.empty())
    {
      // we have got NULL but queue was not Empty then,
      // push NULL to the queue so, node of next level can come after it.
      q.push(NULL);
      level++; // each time we recieve NULL from queue, it implies that a level has been traversed.
    }
  }
  return sum;
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

  int k = 2;
  cout << sumAtK(root, k); // 22 = 4+5+6+7
  return 0;
}