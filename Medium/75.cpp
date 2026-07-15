#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j], nums[j+1]);
                }
            }
        }
    }
};

int main(){
    Solution s;
    vector <int> nums = {2,0,2,1,1,0};

    s.sortColors(nums);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

}