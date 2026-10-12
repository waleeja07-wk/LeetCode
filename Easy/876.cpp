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
    ListNode *makeList(const vector<int> &vals)
    {
        ListNode dummyNode;
        ListNode *temp = &dummyNode;

        for (int i = 0; i < vals.size(); i++)
        {
            temp->next = new ListNode(vals[i]);
            temp = temp->next;
        }
        return dummyNode.next;
    }

    ListNode *middleNode(ListNode *head)
    {
        ListNode *curr = head;
        int size = 1;
        while (curr->next)
        {
            curr = curr->next;
            size++;
        }
        if (size == 1)
        {
            return curr;
        }
        curr = head;
        int half = size / 2;
        for (int i = 1; i <= half; i++)
        {
            curr = curr->next;
        }
        return curr;
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
        cout << "]" << endl;
    }
};

int main()
{
    Solution s;
    vector<int> vec = {2, 3, 4, 5, 7};

    ListNode *head = s.makeList(vec);
    ListNode *res = s.middleNode(head);
    s.display(res);
}