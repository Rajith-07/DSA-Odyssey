/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> res;
        ListNode* curr = head;

        while (curr != nullptr) {
            res.push_back(curr->val);
            curr = curr->next;
        }

        int n = res.size();
        // for (int i: res) cout << i << " ";
        
        int l=0, r=n-1;
        int max_s = 0;

        while (l<r) {
            int s = res[l]+res[r];
            max_s = max(max_s, s);

            l++; r--;
        }

        return max_s;
    }
};