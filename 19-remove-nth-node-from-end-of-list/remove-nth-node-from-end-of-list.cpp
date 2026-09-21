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
        int length = 0;
        ListNode *len = head;
        while(len != nullptr)
        {
            length ++ ;
            len = len->next;
        }
if(n == length)
{
    ListNode *temp = head;
    head = head->next;
    delete temp;
    return head;
}
        ListNode *curr = head;
        for(int i = 0; i < length-n-1; i++)
        {
            curr = curr->next;
        }

        ListNode *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;

        return head;
    }

};