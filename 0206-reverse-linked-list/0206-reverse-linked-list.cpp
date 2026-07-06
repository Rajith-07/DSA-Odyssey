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
    ListNode* reverseList(ListNode* head) {
        // if (head==nullptr) return nullptr;

        // vector<int> temp;
        // ListNode *curr = head;

        // while(curr) {
        //     temp.push_back(curr->val);
        //     curr = curr->next;
        // }

        // reverse(temp.begin(), temp.end());

        // ListNode *h = new ListNode(temp[0]);
        // curr = h;

        // for (int i=1;i<temp.size();i++) {
        //     ListNode *t = new ListNode(temp[i]);
        //     curr->next = t;
        //     curr = curr->next;
        // }

        // return h;


        //Iterative Method
        if (head==nullptr || head->next==nullptr) return head;
        ListNode *prev=nullptr, *curr=head;

        while(curr) {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev=curr;
            curr=temp;
        }

        return prev;
    }
};