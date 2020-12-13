class Solution {
    public:
		//function to determine max depth of a given node
        int dep(TreeNode* node) {
            if(!node) return 0;
            return 1 + max(dep(node->left), dep(node->right));
        }
    
        TreeNode* subtreeWithAllDeepest(TreeNode* root) {
            if(!root) return NULL;
            
			//first find max depth of both the left and right branch of root
            int lDep = dep(root->left);
            int rDep = dep(root->right);
            
			//there are three possible scenarios here
			//left depth is the same as the right, meaning this is the node is the subtree that contains all the deepest nodes
            if(lDep == rDep) return root;
			
			//left depth is deeper than the right, meaning the answer is somewhere in the left subtree
            else if(lDep > rDep) return subtreeWithAllDeepest(root->left);
			
			//right depth is deeper than the left, meaning the answer is somewhere in the right subtree
            else return subtreeWithAllDeepest(root->right);
        }
};
