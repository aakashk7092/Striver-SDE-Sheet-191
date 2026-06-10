// time complexity - O(n)
// space complexity - O(n) (to store answer)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < n; i++) {
            if (result.empty() || nums[i][0] > result.back()[1]) {
                result.push_back(nums[i]);
            } else {
                result.back()[1] = max(result.back()[1], nums[i][1]);
            }
        }
        return result;
    }
};
