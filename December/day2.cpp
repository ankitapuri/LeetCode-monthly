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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
      ListNode* ptr = NULL;
    Solution(ListNode* head) {
        ptr = head;
     }
    
    /** Returns a random node's value. */
    int getRandom() {
        ListNode* current = ptr;
        ListNode* ptr1;
        int n=1;
        while(current)
        {
            if(rand()%n==0)
                ptr1 = current;
           current = current->next;
           n++;
             
        }
        
        return ptr1->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
