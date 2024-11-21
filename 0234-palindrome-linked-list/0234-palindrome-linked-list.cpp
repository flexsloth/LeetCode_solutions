class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *gg = head;
        ListNode *gg1 = NULL;
        if(head==NULL or head->next==NULL) return head;
        while(gg){
            ListNode *gg2 = new ListNode(gg->val);
            gg2->next = gg1;
            gg1 = gg2;
           // gg1 = gg1->next;
            gg = gg->next;
        }
        while(head!=NULL and gg1!=NULL)
            {if(head->val!=gg1->val) return false;
            head = head->next;
            gg1 = gg1->next;
            }
    return true;
    }
};