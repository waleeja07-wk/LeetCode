class Stack
{
private:
public:
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
        while (top)
        {
            pop();
        }
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void push(int x)
    {
        Node *n = new Node(x);
        n->next = top;
        top = n;
        size++;
    }

    int pop()
    {
        if (!top)
        {
            throw runtime_error("Stack is empty!");
        }

        Node *curr = top;
        int val = curr->val;
        top = top->next;
        delete curr;
        size--;
        return val;
    }

    int Top()
    {
        if (!top)
        {
            throw runtime_error("Stack is empty!");
        }
        return top->val;
    }
};
class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        Stack record;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "+")
            {
                int val1 = record.Top();
                record.pop();
                int val2 = record.Top();
                record.push(val1);
                record.push(val1 + val2);
            }
            else if (operations[i] == "D")
            {
                int doubleVal = 2 * (record.Top());
                record.push(doubleVal);
            }
            else if (operations[i] == "C")
            {
                record.pop();
            }
            else
            {
                int n = stoi(operations[i]);
                record.push(n);
            }
        }
        int sum = 0;
        while (!record.isEmpty())
        {
            sum += record.pop();
        }
        return sum;
    }
};