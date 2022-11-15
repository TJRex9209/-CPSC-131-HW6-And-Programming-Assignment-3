class Solution {
public:
    void inorderhelp(TreeNode* root, vector<int>& x){
        
        if(root == NULL){   //checks if root is null and if so return 
            return;
        }
        inorderhelp(root->left, x);  //this will call back the function for the left subtree
        x.push_back(root->val);      //this will push back root pointing at val into vector x
        inorderhelp(root->right, x); //this will call back the function for the right subtree
    }
    
    vector<int> inorderTraversal(TreeNode* root) { // is a vector int function that will take the input root
        vector<int> x;                             // declare vector x
        inorderhelp(root, x);  //calls back the inorder helpfunction to traverse teh vector in order
        return x;           //and return the vector
    }
};