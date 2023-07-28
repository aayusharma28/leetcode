/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;


// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k =1,x=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                k++;
                nums[x]=nums[i];
                x++;
            }
        }
        return k;
    }
};
// @lc code=end

