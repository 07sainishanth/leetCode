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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr)
            return head;
        int count = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            count++;
        }
        int med = 0;
        temp = head;
        if(count ==1)
            return head;
        while(temp != nullptr && med < count/2){
            temp = temp->next;
            med++;
        }
        return temp;
    }
};