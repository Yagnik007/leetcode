//TC: O(n).
//SC: O(1).

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *dummy = new ListNode(0);
       dummy -> next = head;
       ListNode *left = dummy, *right = dummy;
        
       for(int i=1; i<=n; i++) right = right -> next; 
        
       while(right->next!=nullptr)
       {
           left = left -> next;
           right = right -> next;
       }
        
       left -> next = left -> next -> next;
        return dummy -> next;
    }
};
