//* Replace the value of each node with the sum of all subtree nodes and itself.
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

void sumReplacement(Node *root)
{
  if (root == NULL)
    return;

  // this recursion will lead to extreme left
  sumReplacement(root->left);
  // after above, below will start to roll-up
  // which will completely traverse left and right child
  sumReplacement(root->right);

  // all the nodes may not have both left and right child
  //  also leaf nodes are to be taken care of.
  if (root->left != NULL)
    root->data += root->left->data;
  if (root->right != NULL)
    root->data += root->right->data;
}

void preorder(Node *root)
{
  if (root == NULL)
    return;

  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
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

  preorder(root);
  cout << endl;
  sumReplacement(root);
  preorder(root);
  return 0;
}