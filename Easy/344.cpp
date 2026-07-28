#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};

int main(){
    Solution s;
    vector <char> TestCase = {'h', 'e', 'l', 'l', 'o'};
    s.reverseString(TestCase);

    for(int i=0; TestCase[i]!='\0'; i++){
        cout<<TestCase[i];
    }

}