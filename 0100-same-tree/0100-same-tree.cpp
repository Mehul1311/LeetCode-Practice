class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //Both Null return NULL
          if( p == NULL && q == NULL){
            return true;
          }      
            //One Nulll retur false
          if( p == NULL || q == NULL){
            return false;
          }
            //Values are not equal return False 
          if( p -> val != q -> val){
            return false;
          }

        //If trees are same check it and return
        return isSameTree(p->left, q->left) && 
                isSameTree(p->right, q->right);
        }
};