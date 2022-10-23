#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0;i < nums.size();i++){
            sum += nums[i];
        }

        int left = 0;
        for (int i = 0;i < nums.size();i++){
            sum -= nums[i];
            if (left == sum)
                return i;
            
            left += nums[i];
        }
        return -1;
    }
};

int main(){
    vector<int> nums{1,7,3,6,5,6};
    Solution sol;
    int ans = sol.pivotIndex(nums);
    cout << ans << endl;
}
