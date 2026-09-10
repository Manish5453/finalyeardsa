//Binary Search - Painter’s Partition
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPossible(vector<int>& boards, int painters, int maxTime) {

        int countPainters = 1;
        int currentTime = 0;

        for (int i = 0; i < boards.size(); i++) {

            if (currentTime + boards[i] <= maxTime) {
                currentTime += boards[i];
            }
            else {
                countPainters++;
                currentTime = boards[i];
            }
        }

        return countPainters <= painters;
    }

    int minTime(vector<int>& boards, int painters) {

        int low = *max_element(boards.begin(), boards.end());

        int high = 0;

        for (int i = 0; i < boards.size(); i++) {
            high += boards[i];
        }

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (isPossible(boards, painters, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> boards = {10, 20, 30, 40};
    int painters = 2;

    cout << obj.minTime(boards, painters);

    return 0;
}