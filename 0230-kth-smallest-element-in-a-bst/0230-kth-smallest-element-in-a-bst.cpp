/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        dfs(root, res);
        sort(res.begin(), res.end());
        return res[k-1];
    }

private:
    void dfs(TreeNode* node, vector<int>& arr) {
        if (!node) return;

        arr.push_back(node->val);
        dfs(node->left, arr);
        dfs(node->right, arr);
    }
};