/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */
#include <string>
//#include <reverse>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    string convert(string s, int n) {

        int l = s.size();
        int t = n-2;
        int x = l/(2*n-2);
        if(l%(2*n-2)!=0){
            x++;
        }
        int r = x*(n-1);
        int a[r][n];
        int y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<r;j++){
                
            }
        }

        
    }
};
// @lc code=end

