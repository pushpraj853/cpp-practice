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
  int lheight = treeHeight(root->left);
  int rheight = treeHeight(root->right);
  return max(lheight, rheight) + 1;
}

// it has time complexity of O(n*h)
// n = number of nodes;
/// h = height of tree;
int treeDiameter(Node *root)
{
  if (root == NULL)
    return 0;
  int option1 = treeHeight(root->left) + treeHeight(root->right);
  int option2 = treeDiameter(root->left);
  int option3 = treeDiameter(root->right);
  return max(option1, max(option2, option3));
}

// better method
int calcDiameter(Node *root, int *height)
{
  if (root == NULL)
  {
    *height = 0;
    return 0;
  }
  int lh = 0;
  int rh = 0;
  int lDiameter = calcDiameter(root->left, &lh);
  int rDiameter = calcDiameter(root->right, &rh);
  int currDiameter = lh + rh + 1;
  *height = max(lh, rh) + 1;
  return max(currDiameter, max(lDiameter, rDiameter));
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
  cout << treeDiameter(root);
  return 0;
}