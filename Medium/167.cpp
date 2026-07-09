#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int start = 0;
       int end = numbers.size()-1;
       while(start<end){
        int sum = numbers[start]+numbers[end];
        if(sum == target){
            return {start+1, end+1};
        }
        else if(sum < target){
            start++;
        }
        else{
            end--;
        }
       }
       return {};
    }
};

int main(){
    Solution s;
    vector <int> TestCase = {2,7,11,15};
    int target = 9;

    vector <int> result = s.twoSum(TestCase, target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
     }

     return 0;
}