//136. Single Number
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int val : nums) {
            ans = ans ^ val;
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;

    cout << obj.singleNumber(nums);

    return 0;
}