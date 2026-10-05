#include <iostream>
#include <stack>
using namespace std;

class MyQueue
{
private:
    stack<int> in;
    stack<int> out;

public:
    MyQueue() {}

    void push(int x)
    {
        in.push(x);
    }

    int pop()
    {
        while (in.size() != 1)
        {
            out.push(in.top());
            in.pop();
        }
        int val = in.top();
        in.pop();
        while (out.size() != 0)
        {
            in.push(out.top());
            out.pop();
        }
        return val;
    }

    int peek()
    {
        while (in.size() != 1)
        {
            out.push(in.top());
            in.pop();
        }
        int val = in.top();
        while (out.size() != 0)
        {
            in.push(out.top());
            out.pop();
        }
        return val;
    }

    bool empty()
    {
        if (in.empty() && out.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    MyQueue myQueue;
    myQueue.push(1);
    myQueue.push(2);
    cout << myQueue.peek() << endl;
    cout << myQueue.pop() << endl;
    cout << myQueue.empty() << endl;
}