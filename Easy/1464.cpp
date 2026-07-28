#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = (nums[0]-1)*(nums[1]-1);
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size();j++){
                if((nums[i]-1)*(nums[j]-1)>maxProduct){
                    maxProduct = (nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return maxProduct;
    }
};

int main(){
    Solution s;
    vector <int> TestCase = {3,4,5,2};
    cout<<s.maxProduct(TestCase);
    return 0;
}