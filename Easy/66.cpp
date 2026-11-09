class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int end = digits.size() - 1;

        if (digits[end] >= 0 && digits[end] < 9)
        {
            digits[end]++;
            return digits;
        }

        else if (digits[end] == 9)
        {
            int i = end;
            while (i >= 0 && digits[i] == 9)
            {
                digits[i] = 0;
                i--;
            }
            if (i == -1)
            {
                digits.insert(digits.begin(), 1);
            }
            else
            {
                digits[i] += 1;
            }
        }
        return digits;
    }
};