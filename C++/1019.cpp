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
    vector<int> nextLargerNodes(ListNode* head) {
        // // SOlution 1 - O(n^2) - brute force
        // vector<int> list1;
        // ListNode* temp1 = head;
        // if (head == nullptr){
        //     list1.push_back(0);
        //     return list1;
        // }
        // ListNode* temp2 = head->next;
        // while(temp1 != nullptr){
        //     int near_max = 0;
        //     temp2 = temp1->next;
        //     while(temp2 != nullptr){
        //         if(temp2->val > temp1->val){
        //             near_max = temp2->val;
        //             break;
        //         }
        //         temp2 = temp2->next;
        //     }
        //     list1.push_back(near_max);
        //     temp1 = temp1->next;
        // }
        // return list1;

        // O(n)
        vector<int> res, stack;
        for (auto p = head; p != nullptr; p = p->next) res.push_back(p->val);
        for (int i = res.size() - 1; i >= 0; --i) {
            auto val = res[i];
            while (!stack.empty() && stack.back() <= res[i]) stack.pop_back();
            res[i] = stack.empty() ? 0 : stack.back();
            stack.push_back(val);
        }
        return res;
    }
    
};