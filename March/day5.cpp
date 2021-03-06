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
    vector<double> averageOfLevels(TreeNode* root) {
         queue<TreeNode*>q;
        vector<double>res;
         q.push(root); 
        while(!q.empty())
        {
        double sum = 0;
       
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode *curr = q.front();
             q.pop();
            sum+=curr->val;
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
           
        }
        res.push_back(sum/size);
        }
        return res;
    }
};
