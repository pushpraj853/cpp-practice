//*Balanced Height Tree
//* For each node, the difference between the heights of the left subtree & right subtree <= 1

//! just do dry run of a small tree to really understand how the function is working

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

int treeHeight(Node *root)
{
  if (root == NULL)
    return 0;
  int lHeight = treeHeight(root->left);
  int rHeight = treeHeight(root->right);
  return max(lHeight, rHeight) + 1;
}

//* Time complexity of function below is O(n*n)
//* for all n nodes, height function will be called an comlpexity of height function itslef is O(n);
// bool isBalanced(Node *root)
// {
//   if (root == NULL)
//     return true;
//   if (isBalanced(root->left) == false)
//     return false;
//   if (isBalanced(root->right) == false)
//     return false;

//   int lh = treeHeight(root->left);
//   int rh = treeHeight(root->right);

//   if (abs(lh - rh) <= 1)
//     return true;
//   else
//     return false;
// }

//* Reduced time complexity O(n)
//* How? instead of calling Height function each time we calculate height as well as we go along calculating isBalanced()
bool isBalanced(Node *root, int *height)
{
  if (root == NULL)
    return true;

  int lh = 0;
  int rh = 0;

  if (isBalanced(root->left, &lh) == false)
    return false;
  if (isBalanced(root->right, &rh) == false)
    return false;

  lh = treeHeight(root->left);
  rh = treeHeight(root->right);

  *height = max(lh, rh) + 1;
  if (abs(lh - rh) <= 1)
    return true;
  else
    return false;
}

int main()
{
  int height = 0;
  // for balanced tree
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);

  // for unbalanced tree
  // Node *root2 = new Node(1);
  // root2->left = new Node(2);
  // root2->left->left = new Node(3);
  cout << isBalanced(root, &height) << endl;
  return 0;
}