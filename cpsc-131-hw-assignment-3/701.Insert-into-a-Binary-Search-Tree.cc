class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root==NULL)return new TreeNode(val);    // this will check if the root is equal to null and if true return the TreeNode(val) 
        if (root->val > val)root->left= insertIntoBST(root->left,val); // and this checks if the root pointer is less than  val
                                                                       // and if true it insert val into the left node
        else root->right= insertIntoBST(root->right,val);              // and if else it will insert val into the right node
        return root;                                                    
        
    }
};