/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <stack>
#include <reverse>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int x=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[x]);
                x++;
            }
        }
        return nums;
    }
};
// @lc code=end

