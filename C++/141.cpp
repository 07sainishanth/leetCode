/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* curr = head;
        unordered_map<ListNode*, ListNode*>mp;        //hashmap
        while(curr!=NULL)
        {
            if (mp[curr] != nullptr)
                return (true);
            mp[curr]  =curr;
            curr = curr->next;
        }
        return(false);
    }
};