#include <iostream>
#include <cctype>
#include <string> 
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
       int start = 0;
       int end = s.length()-1;
    while(start < end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }

        if(!isalnum(s[end])){
            end--;
            continue;
        }

        if(tolower(s[start])!=tolower(s[end])){
            return false;
        }
        start++;
        end--;
    }
        return true;
    }
    
};

int main(){
    Solution s;
    string str = "A man, a plan, a canal: Panama";
    cout<<s.isPalindrome(str);
    return 0;
}