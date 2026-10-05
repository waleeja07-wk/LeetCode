#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
private:
    queue<int> in;
    queue<int> out;

public:
    MyStack() {}

    void push(int x)
    {
        in.push(x);
    }

    int pop()
    {
        while (in.size() != 1)
        {
            out.push(in.front());
            in.pop();
        }
        int val = in.front();
        in.pop();
        while (out.size() != 0)
        {
            in.push(out.front());
            out.pop();
        }
        return val;
    }

    int top()
    {
        while (in.size() != 1)
        {
            out.push(in.front());
            in.pop();
        }
        int val = in.front();
        out.push(val);
        in.pop();
        while (out.size() != 0)
        {
            in.push(out.front());
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
    MyStack myStack;
    myStack.push(1);
    myStack.push(2);
    cout << myStack.top() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.empty() << endl;
}
