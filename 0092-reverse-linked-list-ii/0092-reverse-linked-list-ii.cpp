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
    void reverseList(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* front = temp->next;
        head->next = NULL;
        while( temp )
        {
            temp->next = head;
            head = temp;
            temp = front;
            if( front != NULL) front = front->next; 
        }
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        int cnt = 1;
        ListNode* l;
        ListNode* r;
        ListNode* p1;
        ListNode* p2;

        if(left == 1){
            p1 = head;
            l = p1;
        }
        ListNode* temp = head;
        while(temp->next){
            cnt++;
            if(cnt == left){
                p1 = temp;
                l = p1->next;
            }
            else if(cnt == right){
                r = temp->next;
                p2 = r;
                if(r->next != NULL) p2 = r->next;
                break;
            }
            temp = temp->next;
        }

        r->next = NULL;
        reverseList(l);

        if(p1 != l) p1->next = r;
        else head = r;

        if(p2 != r) l->next = p2;
        else l->next = NULL;

        return head;
    }
};