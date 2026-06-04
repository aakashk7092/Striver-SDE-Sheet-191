//approach - simple traversal and just recognized the pattern and write code 
// time complexity - O(n)
// space complexity - O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int s1 = -1 ;
        for(int i = n-1 ; i > 0 ;i--){
            if(nums[i] > nums[i-1]){
                s1 = i-1;
                break;
            }
        }
        if(s1 != -1){
            int s2 = s1 ;
            for(int j = n-1 ; j >= s1+1 ; j--){
                if(nums[j] > nums[s1]){
                    s2 = j ;
                    break;
                }
            }
            swap(nums[s1],nums[s2]);
        }
        reverse(nums.begin()+s1+1 ,nums.end());
    }
};
