#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int start = 0;
       int end = nums.size()-1;
       int mid;
       while(start<=end){
        mid = start + (end - start)/2;
        if(target>nums[mid]){
            start = mid+1;
        }
        else if(target<nums[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
       }
        return start;
       } 

};

int main(){
    Solution s;

    vector <int> TestCase1 = {1,3,5,6};
    int target1 = 5;

    vector <int> TestCase2 = {1,3,5,6};
    int target2 = 2;

    int result1 = s.searchInsert(TestCase1, target1);
    cout<<result1<<endl;

    int result2 = s.searchInsert(TestCase2, target2);
    cout<<result2<<endl;

    return 0;
}