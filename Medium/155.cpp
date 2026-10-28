class Node
{
public:
    int val;
    int min;
    Node *next;
    Node(int v, int m) : val(v), next(nullptr), min(m) {}
};
class MinStack
{
private:
    Node *Top;
    bool isEmpty()
    {
        return Top == nullptr;
    }

public:
    MinStack()
    {
        Top = nullptr;
    }

    void push(int value)
    {
        int m = 0;
        if (isEmpty())
            m = value;
        else
            m = min(value, Top->min);

        Node *n = new Node(value, m);
        n->next = Top;
        Top = n;
    }

    void pop()
    {
        if (isEmpty())
            throw std::runtime_error("Stack is empty!");
        Node *temp = Top;
        Top = Top->next;
        delete temp;
    }

    int top()
    {
        if (isEmpty())
            throw std::runtime_error("Stack is empty!");
        return Top->val;
    }

    int getMin()
    {
        if (isEmpty())
            throw std::runtime_error("Stack is empty!");

        return Top->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */