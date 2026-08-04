class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (!root) return true;
        queue<TreeNode*> q;
        q.push(root);
        bool evenLevel = true;

        while (!q.empty()) {
            int size = q.size();
            int prev = evenLevel ? INT_MIN : INT_MAX;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (evenLevel) {
                    if (node->val % 2 == 0 || node->val <= prev) return false;
                } else {
                    if (node->val % 2 == 1 || node->val >= prev) return false;
                }
                prev = node->val;

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            evenLevel = !evenLevel;
        }
        return true;
    }
};