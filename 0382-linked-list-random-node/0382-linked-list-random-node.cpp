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
    int size = 0;
    ListNode* LLhead;
    Solution(ListNode* head) {
        LLhead = head;
        srand(time(0)); 
        ListNode* temp = head;
        while(temp) {
            size++;
            temp = temp->next;
        }
    }
    
    int getRandom() {
        int randomNum = rand() % size + 1; // Range: 1 to size

        ListNode* temp = LLhead;
        int cnt = 1;
        while(temp && randomNum != cnt) {
            cnt++;
            temp = temp->next;
        }

        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */