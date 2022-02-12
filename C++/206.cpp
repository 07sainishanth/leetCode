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
//         if(head == nullptr || head->next == nullptr)
//             return(head);
//         ListNode* head_ = head;
//         ListNode* ret = nullptr;
//         ListNode* prev = nullptr;
//         while(head_->next != nullptr){
//             ListNode* temp = head;
//             while(temp->next->next != nullptr)
//                 temp = temp->next;
//             temp->next->next = head;
            
//             if(ret == nullptr)
//                 ret = temp->next;
//             else
//                 prev->next = temp->next;
//             prev = temp->next;
//             temp->next = nullptr;
//         }
//         return(ret);
        ListNode* curr=head;
       ListNode* prev=NULL;
        while(curr!=NULL)
        {
            ListNode* next=curr->next;            /* First storing curr->next */
            curr->next=prev;                          /* Reversing the link */
            prev=curr;                                    /* Making prev as new curr */
            curr=next;                                      /* Making next as new curr */
        }
        return prev;
    }
};