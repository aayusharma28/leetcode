/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_num = prices[n-1];
        int max_profit = 0;

        for(int i=n-2;i>=0;i--){
            if(prices[i]<=max_num){
                max_profit=max(max_profit,max_num-prices[i]);
            }
            else{
                max_num = prices[i];
            }
        }
        return max_profit;
    }
};
// @lc code=end

