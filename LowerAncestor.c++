#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
  TreeNode *LCA(TreeNode *root, TreeNode *p, TreeNode *q)
  {
    if (root == NULL)
    {
      return NULL;
    }
    if (root->val == p->val || root->val == q->val)
    {
      return root;
    }

    TreeNode *leftLCA = LCA(root->left, p, q);
    TreeNode *rightLCA = LCA(root->right, p, q);

    if (leftLCA && rightLCA)
    {
      return root;
    }
    else if (leftLCA != NULL)
    {
      return leftLCA;
    }
    else
    {
      return rightLCA;
    }
  }
};

int main()
{

  TreeNode *root = new TreeNode(3);
  root->left = new TreeNode(5);
  root->right = new TreeNode(1);
  root->left->left = new TreeNode(6);
  root->left->right = new TreeNode(2);
  root->right->left = new TreeNode(0);
  root->right->right = new TreeNode(8);
  root->left->right->left = new TreeNode(7);
  root->left->right->right = new TreeNode(4);

  TreeNode *p = root->left;               
  TreeNode *q = root->left->right->right; 

  Solution sol;
  TreeNode *lca = sol.LCA(root, p, q);

  if (lca)
    cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val << endl;
  else
    cout << "LCA not found." << endl;

  return 0;
};