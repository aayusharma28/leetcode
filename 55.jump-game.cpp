/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();
        int maxInd=0;

        for(int i=0;i<n;i++){
            if(maxInd>=i){
                maxInd = max(maxInd,i+nums[i]);
            }
        }
        
        if(maxInd>=n-1){
            return true;
        }
        else{
            return false;
        }
    }
};
// @lc code=end

