/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int ma=0,n;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]>ma){
                ma = m[nums[i]];
                n = nums[i];
            }
        }
        return n;
    }
};
// @lc code=end

