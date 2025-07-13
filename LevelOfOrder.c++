#include <iostream>
#include <vector>
#include <queue>
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

void levelOrder(Node *root)
{
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (q.size() > 0)
  {
    Node *curr = q.front();
    q.pop();
    if (curr == NULL)
    {
      if (!q.empty())
      {
        cout << endl;
        q.push(NULL);
        continue;
      }
      else
      {
        break;
      }
    }
    cout << curr->data << " ";
    if (curr->left != NULL)
    {
      q.push(curr->left);
    }
    if (curr->right != NULL)
    {
      q.push(curr->right);
    }
  }
}

int treeHeight(Node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int leftHt = treeHeight(root->left);
  int rightHt = treeHeight(root->right);
  return max(leftHt, rightHt) + 1;
}

int main()
{
  vector<int> PreOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
  Node *root = buildBinaryTree(PreOrder);

  cout << "levelOrder: ";
  levelOrder(root);
  cout << "\n";
  cout << "Height of tree: " << treeHeight(root) << endl;

  return 0;
}
