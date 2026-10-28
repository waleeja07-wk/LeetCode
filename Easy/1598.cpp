class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<string> s;
        for (int i = 0; i < logs.size(); i++)
        {
            if (logs[i] == "../")
            {
                if (!s.empty())
                    s.pop();
                else
                    continue;
            }
            else if (logs[i] == "./")
            {
                continue;
            }
            else
            {
                s.push("x");
            }
        }
        return s.size();
    }
};