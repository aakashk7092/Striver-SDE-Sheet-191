// Time Complexity: O(m * n * (m + n))
// Space Complexity: O(m * n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> mat = matrix;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {

                    for(int k = 0; k < n; k++) {
                        mat[i][k] = 0;
                    }

                    for(int k = 0; k < m; k++) {
                        mat[k][j] = 0;
                    }
                }
            }
        }

        matrix = mat;
    }
};


// Time Complexity: O(m * n)
// Space Complexity: O(m + n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<bool> rows(m, false);
        vector<bool> cols(n, false);

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(rows[i] || cols[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
