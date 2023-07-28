/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int x=-1,k=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                k++;
            }
            if(nums[i]==val && x==-1){
                x=i;
            }
            if(nums[i]!=val && x!=-1){
                c++;
            }
        }
        int y;
        if(nums[nums.size()-1]!=val){
            for(int i=0;i<c;i++){
                nums[x+i]=nums[x+k+i];
            }
        }
        return nums.size()-k;   
    }
};
// @lc code=end

