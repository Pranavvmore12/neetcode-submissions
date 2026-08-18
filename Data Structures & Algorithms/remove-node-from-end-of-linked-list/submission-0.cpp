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
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        if(count==n){
            ListNode* del1=head;
            head=head->next;
            delete(del1);
           return head;
        }
        int res=count-n;
        while(temp!=NULL){
              res--;
            if(res==0){
                break;
            }
            temp=temp->next;
          
            
        }
        ListNode* delFi=temp->next;
        temp->next=temp->next->next;
        delete(delFi);
        return head;
    }
};
