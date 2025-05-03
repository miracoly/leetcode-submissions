/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
 public:
  TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) return nullptr;
    else if (key < root->val) root->left = deleteNode(root->left, key);
    else if (key > root->val) root->right = deleteNode(root->right, key);
    else {
      if (!root->left) {
        auto right = root->right;
        delete root;
        return right;
      } else if (!root->right) {
        auto left = root->left;
        delete root;
        return left;
      } else {
        auto minNode = minimum(root->right);
        root->val = minNode->val;
        root->right = deleteNode(root->right, minNode->val);
      }
    }
    return root;
  }

 private:
  TreeNode* minimum(TreeNode* root) {
    TreeNode* curr = root;
    while (curr->left) {
      curr = curr->left;
    }
    return curr;
  }
};

