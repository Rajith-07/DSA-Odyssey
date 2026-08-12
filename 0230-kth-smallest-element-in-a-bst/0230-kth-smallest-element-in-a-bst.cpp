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
// class Solution {
// public:
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> res;
//         dfs(root, res);
//         sort(res.begin(), res.end());
//         return res[k-1];
//     }

// private:
//     void dfs(TreeNode* node, vector<int>& arr) {
//         if (!node) return;

//         arr.push_back(node->val);
//         dfs(node->left, arr);
//         dfs(node->right, arr);
//     }
// };



// OPTIMAL DFS -> inorder traversal always gives a sorted form ->. so stopping at k gives the solution
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res(2);
        res[0] = k;
        dfs(root, res);
        return res[1];
    }

private:
    void dfs(TreeNode* node, vector<int>& res) {
        if (!node) return;

        dfs(node->left, res);

        if (res[0]==0) return;

        res[0]--;
        if(res[0]==0) {
            res[1] = node->val;
            return;
        }

        dfs(node->right, res);

    }
};