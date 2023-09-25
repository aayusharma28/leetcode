/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

#include <string>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> v(26,0),w(26,0);
        int n = t.size();
        for(int i=0;i<n-1;i++){
            v[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            w[t[i]-'a']++;
            if(w[t[i]-'a']>v[t[i]-'a']){
                return t[i];
            }
        }
        return t[n-1];
    }
};
// @lc code=end

