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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        if (n > len)
            return (head);
        int count = len-n;
        temp = head;
        if (count == 0)
            head = head->next;
        for (int i = 0; i < count-1; i++){
            temp = temp->next;
        }
        if (temp != NULL){
            if(temp->next != NULL)
                temp->next = temp->next->next;
        }
        return (head);
    }
};