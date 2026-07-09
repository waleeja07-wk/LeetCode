#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main(){
    Solution s1;

    vector <int> TestCase = {2,7,11,15};
    int target = 9;

    vector <int> result = s1.twoSum(TestCase, target);
     for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
     }

    return 0;
}
