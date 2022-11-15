class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp = root;  // this will assign the poitner temp to the input of the function root
                                // this is an iterative approach to BST
        while(temp != NULL){    // this will check if what temp is poiting to is null
            if(temp->val == val)   // this will check if temp is point to val
                return temp;        // and if so it will return temp's value
                                // and if else it will run the code below
            if(temp->val > val) // and it will check if the temp's value is greater than the val
                temp = temp->left;  // then if true assigns it to the left node 
            else
                temp = temp->right; // and if false it assign it to the right node
        }
        
        return NULL;
    }
};