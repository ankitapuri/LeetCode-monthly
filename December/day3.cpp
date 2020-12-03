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
     TreeNode* head = new TreeNode(0); //the topmost node actually is declared null 
     TreeNode* ptr = head;  //the ptr traverses
     void dfs(TreeNode* root)
     {
       if(root==NULL)
        return;
       dfs(root->left);
       head->right= new TreeNode(root->val);
       head=head->right;
       dfs(root->right);
       return;
     }
    TreeNode* increasingBST(TreeNode* root) {
      dfs(root);
      return ptr->right; //returning the right increasing order BST
        
    }
};
