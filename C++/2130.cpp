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
        vector<int> list1;
        ListNode* temp =head;
        while(temp){
            list1.push_back(temp->val);
            temp = temp->next;
        }
        int maxSumTwin = INT_MIN;
        for(int i = 0; i < list1.size()/2; i++){
            maxSumTwin = max(maxSumTwin, list1[i]+list1[list1.size()-i-1]);
        }
        return maxSumTwin;
    }
};