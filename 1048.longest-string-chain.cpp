/*
 * @lc app=leetcode id=1048 lang=cpp
 *
 * [1048] Longest String Chain
 */

#include <string>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;


// @lc code=start
class Solution {
public:

    static bool cmp(string& a, string&b){
        return a.size()<b.size();
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        map<string,int> m;
        int n = words.size(),l=0,ans=0;
        for(int i=0;i<n;i++){
            l=0;
            for(int j=0;j<words[i].size();j++){
                string s = words[i];
                s.erase(j,1);
                l = max(l,m[s]+1);
            }
            m[words[i]]=l;
            ans = max(ans,l);
        }
        return ans;
    }
};
// @lc code=end

