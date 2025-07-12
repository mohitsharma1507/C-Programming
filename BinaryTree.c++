#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = right = NULL;
  }
};

static int idx = -1;

Node *buildBinaryTree(vector<int> &PreOrder)
{
  idx++;
  if (PreOrder[idx] == -1)
  {
    return NULL;
  }

  Node *root = new Node(PreOrder[idx]);
  root->left = buildBinaryTree(PreOrder);
  root->right = buildBinaryTree(PreOrder);
  return root;
};

void printPreorder(Node *root)
{
  if (root == NULL)
    return;
  cout << root->data << " ";
  printPreorder(root->left);
  printPreorder(root->right);
}
void Inorder(Node *root)
{
  if (root == NULL)
    return;
  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}
void Postorder(Node *root)
{
  if (root == NULL)
    return;
  Postorder(root->left);
  Postorder(root->right);
  cout << root->data << " ";
}

int main()
{
  vector<int> PreOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
  Node *root = buildBinaryTree(PreOrder);

  cout << "Preorder: ";
  printPreorder(root);
  cout << "\n";

  cout << "Inorder: ";
  Inorder(root);
  cout << "\n";

  cout << "Postorder: ";
  Postorder(root);
  cout << "\n";

  return 0;
}
