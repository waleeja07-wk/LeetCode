#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid;
        while(start <= end){
            mid = start + (end - start)/2;
        if(nums[mid]<target){
            start = mid+1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else if(nums[mid] == target){
            return mid;
        }
        }
         return -1;
    }

};

int main(){
    Solution s;

    vector <int> TestCase = {-1,0,3,5,9,12};
    int target = 9;

    int result1 = s.search(TestCase, target);
    cout<<result1<<endl;

    return 0;
}