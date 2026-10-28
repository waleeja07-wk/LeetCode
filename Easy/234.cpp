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
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (!head || !head->next)
            return true;

        stack<int> s;
        int count = 0;
        ListNode *temp = head;
        while (temp)
        {
            count++;
            temp = temp->next;
        }

        temp = head;

        for (int i = 0; i < (count) / 2; i++)
        {
            s.push(temp->val);
            temp = temp->next;
        }

        if (count % 2 != 0)
            temp = temp->next;
        while (temp && !s.empty())
        {
            if (s.top() != temp->val)
                return false;
            s.pop();
            temp = temp->next;
        }
        return s.empty();
    }
};