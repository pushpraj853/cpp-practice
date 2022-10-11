// height of binary tree: is the depth of tree's deepest node

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

//* Concept of calculating height with recusrion is to :
//*   height of left subtree + height of right subtree + 1
//* this +1 is to include the root itself;
int treeHeight(Node *root)
{
  if (root == NULL)
    return 0;
  int lHeight = treeHeight(root->left);
  int rHeight = treeHeight(root->right);
  return max(lHeight, rHeight) + 1;
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
  cout << treeHeight(root) << endl;
  return 0;
}
