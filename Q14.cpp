// 2965. Find Missing and Repeated Values
// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.
//Return a 0 - indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;

        int n = grid.size();
        int a = -1, b = -1;

        // Find repeated number
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (s.find(grid[i][j]) != s.end()) {
                    a = grid[i][j];
                    ans.push_back(a);
                }
                else {
                    s.insert(grid[i][j]);
                }
            }
        }

        // Find missing number
        for (int i = 1; i <= n * n; i++) {
            if (!s.count(i)) {
                b = i;
                ans.push_back(b);
                break;
            }
        }

        return ans;
    }
};

int main() {

    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    Solution obj;

    vector<int> ans = obj.findMissingAndRepeatedValues(grid);

    cout << "Repeated number: " << ans[0] << endl;
    cout << "Missing number: " << ans[1] << endl;

    return 0;
}