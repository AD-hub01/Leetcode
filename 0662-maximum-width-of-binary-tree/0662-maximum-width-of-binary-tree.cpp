class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        long long maxWidth = 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});  

        while (!q.empty()) {
            int size = q.size();
            long long left = q.front().second;   
            long long right = q.back().second;   
            maxWidth = max(maxWidth, right - left + 1);

            for (int i = 0; i < size; i++) {
                auto [node, idx] = q.front();
                q.pop();

                
                long long normalized = idx - left;

                if (node->left) q.push({node->left, normalized * 2});
                if (node->right) q.push({node->right, normalized * 2 + 1});
            }
        }
        return (int)maxWidth;
    }
};