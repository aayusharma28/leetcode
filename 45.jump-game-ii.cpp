/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++){
            nums[i]=max(nums[i]+i,nums[i-1]);
        }
        int j=0,ans=0;
        while(j<n-1){
            ans++;
            j=nums[j];
        }
        return ans;
    }
};
// @lc code=end

