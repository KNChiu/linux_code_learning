#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1;i < nums.size();i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};

int main(){
    vector<int> nums{1, 1, 1, 1};
    Solution sol;
    vector<int>  ans = sol.runningSum(nums);
    for(int num : ans){
        cout << num << " ";
    }

    return 0;
}
