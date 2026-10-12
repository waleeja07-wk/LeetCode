#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *makeList(const vector<int> v)
    {
        ListNode dummy;
        ListNode *temp = &dummy;

        for (int i = 0; i < v.size(); i++)
        {
            temp->next = new ListNode(v[i]);
            temp = temp->next;
        }
        return dummy.next;
    }
    ListNode *reverseList(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
    void display(ListNode *head)
    {
        ListNode *curr = head;
        cout << "[";
        while (curr)
        {
            cout << curr->val;
            if (curr->next)
            {
                cout << ", ";
            }
            curr = curr->next;
        }
        cout << "]";
        cout << endl;
    }
};

int main()
{
    Solution s;
    vector<int> vec = {2, 3, 4, 5};
    ListNode *head = s.makeList(vec);
    s.display(head);
    ListNode *uphead = s.reverseList(head);
    s.display(uphead);
}