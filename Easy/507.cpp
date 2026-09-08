#include <iostream>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1; i<num; i++){
            if(num%i==0){
                sum += i;
            }
        }
        if(sum==num){
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){
    Solution s1;
    int num1 = 28;

    if(s1.checkPerfectNumber(num1)){
        cout<<num1<<" is a Perfect Number"<<endl;
    }

    else{
        cout<<num1<<" is not a Perfect Number"<<endl;
    }

}