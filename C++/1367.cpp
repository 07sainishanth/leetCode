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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(head == nullptr)
            return true;
        if(root == nullptr)
            return false;
        if(head->val == root->val){
            cout << head->val << " " << root->val << " ";
            cout << (true || false);
            return (subPath(head->next, root->left) || subPath(head->next, root->right) || isSubPath(head, root->left) || isSubPath(head, root->right) );
        }
        else
            return (isSubPath(head, root->left) || isSubPath(head, root->right));
    }
    bool subPath(ListNode* head, TreeNode* root) {
        if(head == nullptr)
            return true;
        if(root == nullptr)
            return false;
        if(head->val == root->val){
            cout << head->val << " " << root->val << " ";
            return (subPath(head->next, root->left) || subPath(head->next, root->right));
        }
        return false;
    }
};