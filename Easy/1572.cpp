#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i=0; i<mat.size(); i++){
            sum+=mat[i][i];

        if(i!=mat[i].size()-1-i){
                sum+=mat[i][mat[i].size()-1-i];
                }
            }
            return sum;
        }
        
};

int main(){
    Solution s;
    vector <vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

    cout<<"DIAGONAL SUM = "<<s.diagonalSum(matrix);

}