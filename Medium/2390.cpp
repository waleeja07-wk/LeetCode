class Node
{
public:
    int val;
    Node *next;
    Node(int v) : val(v), next(nullptr) {}
};

class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        string out = "";
        while (!st.empty())
        {
            out += st.top();
            st.pop();
        }

        reverse(out.begin(), out.end());
        return out;
    }
};