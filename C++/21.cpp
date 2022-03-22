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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* headRes = list1;
        ListNode* tempSwap = list1;
        ListNode* prevNode = temp1;
        int i = 0;
        if (temp1 != NULL){
            while(temp2 != NULL and temp1 != NULL){
                if(temp1->val > temp2->val) {
                    tempSwap = temp1;
                    temp1 = temp2;
                    temp2 = temp2->next;
                    temp1->next = tempSwap;
                }
                if(i == 0){
                    headRes = temp1;
                    prevNode = temp1;
                }
                else {
                    prevNode->next = temp1;
                    prevNode = temp1;
                }
                i++;
                temp1 = temp1->next;
            }
            
            if (temp1 == NULL)
                prevNode->next = temp2;
        }
        else
            return (temp2);
        return (headRes);
        
    }
};