/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
private:
 Node* dfs(Node* head) {
    Node* curr = head;
    Node* last = nullptr;

    while(curr) {
        Node* next = curr->next;

        if(curr->child) {
            Node* child = curr->child;
            Node* childTail = dfs(child);

            curr->next = child;
            child->prev = curr;
            curr->child = nullptr;

            childTail->next = next;
            if(next)
                next->prev = childTail;

            last = childTail;
            curr = childTail;
        } else {
            last = curr;
        }

        curr = curr->next;
    }

    return last;
}
public:
    Node* flatten(Node* head) {
        if(head)
            dfs(head);
        return head;
    }
};