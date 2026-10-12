#include <iostream>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int integer = 0;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case 'I':
                integer += 1;
                break;
            case 'V':
                integer += 5;
                if (i > 0 && s[i - 1] == 'I')
                    integer -= 2;
                break;
            case 'X':
                integer += 10;
                if (i > 0 && s[i - 1] == 'I')
                    integer -= 2;
                break;
            case 'L':
                integer += 50;
                if (i > 0 && s[i - 1] == 'X')
                    integer -= 20;
                break;
            case 'C':
                integer += 100;
                if (i > 0 && s[i - 1] == 'X')
                    integer -= 20;
                break;
            case 'D':
                integer += 500;
                if (i > 0 && s[i - 1] == 'C')
                    integer -= 200;
                break;
            case 'M':
                integer += 1000;
                if (i > 0 && s[i - 1] == 'C')
                    integer -= 200;
                break;
            }
        }
        return integer;
    }
};

int main()
{
    Solution s;
    string roman;
    cin >> roman;

    cout << s.romanToInt(roman) << endl;
}