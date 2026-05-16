class Solution {
    void solve(TreeNode* root, vector<int> &arr){
        //base case
        if(root == NULL){
            return;
        }
        solve(root->left,arr);
        solve(root->right,arr);
        arr.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        solve(root,arr);
        return arr;
    }
};
