class Solution {
public:

TreeNode* deleteNode(TreeNode* root, int key) {
    if(root==NULL){return NULL;}        // check if the root is null and if true return null
    if(root->val==key){return rmv(root);}   // otherwise check if root pointing at val is equalivent to key and if true
                                            // remove the root 
    TreeNode* r=root;   // otherwise creating the pointer r equal to root
    while(r!=NULL){     // do while loop as long r is not null
        if(r->val>key){ // if the pointer r is greater than key run the code below 
            if(r->left!=NULL && r->left->val==key){ // if r left doesnt equal null and pointer r to left to val is equal to key run the code beneath
                r->left=rmv(r->left);               // pointer r is equal to the removal of pointer r to the left
            }
            else{r=r->left;}                        // else r will equal r pointing at the left
        }
        else{                                       // if the pointer r is not greater than key run the code below
            if(r->right!=NULL && r->right->val==key){//if the pointer r point at right node is null and  
                r->right=rmv(r->right);             // pointer r to right remove r pointing right
            }
            else{
                r=r->right; //else r is equal to r pointing to right
            }
        }
    }
    return root;
}
TreeNode* rmv(TreeNode* node){ //this is the rmv function
    if(node->left==NULL){return node->right;}   //if node left is null return the right node
    if(node->right==NULL){return node->left;}   //if the node right is null return the left node
    TreeNode* rgt=node->right;                  //make the pointer variable rght equal to node pointing to right
    TreeNode* lft=rgtmst(node->left);           //make the pointer variable lft equal to the function rgtmst node pointing to the left
    lft->right=rgt;                             //else lft points to right equals rgt
    return node->left;                          // returns node pointing to the left
}   
TreeNode* rgtmst(TreeNode* rt){                 // this is the rgtmst function and it takes the rt pointer
    if(rt->right==NULL){return rt;}             // if rt pointing to right is null return rt
    return rgtmst(rt->right);                   //else rgtmst (rt right) 
}

};