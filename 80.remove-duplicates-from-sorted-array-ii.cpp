/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        int k =1,x=1,c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                if(c<=1){
                    nums[x]=nums[i];
                    x++;
                    k++;
                }
                c++;
            }
            if(nums[i]!=nums[i-1]){
                k++;
                nums[x]=nums[i];
                x++;
                c=1;
            }
        }
        return k;
    }
};
// @lc code=end

