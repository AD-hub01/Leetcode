class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (!root) return true;

        queue<TreeNode*> q;
        q.push(root);
        bool end = false; 

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (!node) {
                end = true;  
            } else {
                if (end) return false;
                q.push(node->left);
                q.push(node->right);
            }
        }
        return true;
    }
};