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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // // TC O(N) - SC O(N)
       ListNode *prev=head;
        head=head->next;
        int i=1;
        vector<int> index;
        while(head->next){
            if((prev->val < head->val and head->val > head->next->val) ||( prev->val > head->val and head->val < head->next->val)){
                index.push_back(i);
            }
            prev=head;
            head=head->next;
            i++;
        }
        if(index.size() < 2) return {-1,-1};
        
        int mindist=INT_MAX;
        for(int i=0;i<index.size()-1;i++){
            mindist=min(index[i+1]-index[i],mindist);
        }
        return {mindist,index.back()-index[0]};
        
        // // TC O(N) - SC O(1)
        // ListNode *prev=head;
        // head=head->next;
        // int i=1,mindist=INT_MAX,prev_i=INT_MIN,first_i=-1;
        // while(head->next){
        //     if((prev->val < head->val and head->val > head->next->val) ||( prev->val > head->val and head->val < head->next->val)){
        //         if(prev_i!=INT_MIN) mindist=min(mindist,i-prev_i);
        //         if(first_i==-1) first_i=i;
        //         prev_i=i;
        //     }
        //     prev=head;
        //     head=head->next;
        //     i++;
        // }
        // if(mindist==INT_MAX) return {-1,-1};
        // return {mindist,prev_i-first_i};
    }
};