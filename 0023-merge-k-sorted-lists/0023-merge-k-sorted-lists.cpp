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
private:

    ListNode* merge(ListNode* head1, ListNode* head2)
    {
        ListNode* dummy = new ListNode(-1);
        ListNode* head = dummy;
        while(head1 != NULL && head2 != NULL)
        {
            if(head1->val > head2->val)
            {
                dummy->next = head2;
                head2 = head2->next;
                dummy = dummy->next;
            }
            else
            {
                dummy->next = head1;
                head1 = head1->next;
                dummy = dummy->next;
            }
        }
        if(head1 != NULL)
        {
            dummy->next = head1;
        }
        if(head2 != NULL)
        {
            dummy->next = head2;
        }

        return head->next;
    }

    ListNode* divide(int low, int high, vector<ListNode*>& arr)
    {
        if(low >= high) return arr[low];

        int mid = (low+high) / 2;

        ListNode* head1 = divide(low, mid, arr);
        ListNode* head2 = divide(mid+1, high, arr);

        return merge(head1, head2);
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;
        return divide(0, lists.size()-1, lists);
    }
};