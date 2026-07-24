class Solution {
public:

    bool isMirror(TreeNode* left , TreeNode* right){
        //Both Null = Mirror
        if(left == NULL && right == NULL){
            return true;
        }

        //if even one side is null= Not mirror
        if(left == NULL || right == NULL){
            return false;

        }

        //comparing Values if they are matching or not
        if(left -> val != right -> val){
            return false;
        }

        // Suppose we're folding tree from the middle like a paper so now you are not camparing different parts you're comparing Same part of the tree!!
        return isMirror(left->left, right->right) &&
                isMirror(left->right, right->left);
        
    }

    bool isSymmetric(TreeNode* root) {

        //If the root itself is null
        if(root  == NULL){
            return true;
        }

        return isMirror(root->left , root->right);

        
    }
};