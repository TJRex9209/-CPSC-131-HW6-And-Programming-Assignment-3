class Solution {
public:
    int maxDepth(TreeNode* root) {           //maxDepth function that takes the pointer root 
        if(!root) return 0;                  // if root is false return 0
        int maxLeft = maxDepth(root->left);  //  declare variable maxleft and call the function with the input root pointing to the left
        int maxRight = maxDepth(root->right);//  declare variable maxright and call the function with the input root pointing to the right
        return max(maxLeft, maxRight)+1;     //return max with the input of maxleft and maxright
    }
    
};