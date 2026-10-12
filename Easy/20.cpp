#include <iostream>
using namespace std;

class Stack
{
    struct Node
    {
        int val;
        Node *next;
        Node(int v) : val(v), next(nullptr) {}
    };
    Node *top;
    int size;

public:
    Stack()
    {
        top = nullptr;
        size = 0;
    }
    ~Stack()
    {
        while (top != nullptr)
        {
            pop();
        }
    }

    bool isEmpty() const
    {
        return size == 0;
    }

    int getSize()
    {
        return size;
    }
    void push(int val)
    {
        Node *n = new Node(val);
        n->next = top;
        top = n;
        size++;
    }

    int pop()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Stack is empty!");
        }

        Node *temp = top;
        int x = temp->val;
        top = top->next;
        delete temp;
        size--;
        return x;
    }

    int Top()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Stack is empty!");
        }
        return top->val;
    }
};
class Solution
{
public:
    bool isValid(string s)
    {
        Stack s1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                s1.push(s[i]);
            }

            else
            {
                if (s1.getSize() == 0)
                {
                    return false;
                }
                else if (s[i] == ')' && s1.Top() == '(')
                {
                    s1.pop();
                }
                else if (s[i] == '}' && s1.Top() == '{')
                {
                    s1.pop();
                }
                else if (s[i] == ']' && s1.Top() == '[')
                {
                    s1.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return s1.isEmpty();
    }
};

int main()
{
    Solution s;
    string p;
    cin >> p;

    int res = s.isValid(p);

    if (res)
        cout << "Valid Pranthesis" << endl;
    else
        cout << "Not A Valid Pranthesis" << endl;
}