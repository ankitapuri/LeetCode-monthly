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
    ListNode* swapPairs(ListNode* head) {
        ListNode* p;
        ListNode* q;
        if(head==nullptr)return head;
        else if(head->next==nullptr)return head;
        ListNode* first=head->next;
        ListNode* before;
        p=head;
        q=head->next;
        p->next=q->next;
        q->next=p;
        head=p->next;
        before=p;
        if(head==nullptr || head->next==nullptr)return first;
        else while(true){
            p=head;
            q=head->next;
            before->next=q;
            p->next=q->next;
            q->next=p;
            head=p->next;
            before=p;
            if(head==nullptr || head->next==nullptr)return first;
        }
        
        return first;    
    }  
};
