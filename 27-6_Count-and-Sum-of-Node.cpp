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

int countNode(Node *root)
{
  if (root == NULL)
    return 0;
  return countNode(root->left) + countNode(root->right) + 1;
}

int countSum(Node *root)
{
  if (root == NULL)
    return 0;

  return countSum(root->left) + countSum(root->right) + root->data;
  // at last countSum(root->left) will return 0 when it becomes nuLL
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
  cout << countNode(root) << endl;
  cout << countSum(root) << endl;
  return 0;
}