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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp = lists[i];
            if(temp){
            int val = temp->val;
            pq.push({val,temp});
            }
        }
        ListNode* ans = new ListNode(-1);
        ListNode* head = ans;
        
        while(!pq.empty())
        {
            auto node = pq.top().second;
            int val = pq.top().first;
            pq.pop();
            ListNode* newnode = new ListNode(val);
            // cout<<val<<endl;
            ans -> next = newnode;
            ans = ans->next;
            if(node->next)
            {
                pq.push({(node->next)->val,node->next});
            }
        }
        return (head->next);

    }
};