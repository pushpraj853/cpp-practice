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

//* remember just do a dry run in case of confusion
void rightView(Node *root)
{
  if (root == NULL)
    return;

  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
      // store the node in current
      Node *curr = q.front();
      q.pop();

      // if it is last node in the queue right now => rightmost node of a level
      // which is exactly what we want, so print it.
      if (i == n - 1)
        cout << curr->data << " ";

      // for next level
      // if current node have childs then push it to queue,
      // which will increase the size of queue;
      if (curr->left != NULL)
        q.push(curr->left);

      if (curr->right != NULL)
        q.push(curr->right);
    }
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
}