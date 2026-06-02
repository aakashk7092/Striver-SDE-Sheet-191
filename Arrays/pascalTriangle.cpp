// Approach:
// Build Pascal's Triangle row by row.
// First and last elements of each row are always 1.
// Middle elements are the sum of the two elements above them.
class Solution {
public:
    vector<vector<int>> generate(int rows) {
        vector<vector<int>>ans ;
        for(int i = 0 ; i < rows;i++){
            ans.push_back(vector<int>(i+1,1));
            for(int j = 1 ; j < i ;j++){
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            }
        }
        return ans;
    }
};

// Time Complexity: O(n²)
// Space Complexity: O(n²)
