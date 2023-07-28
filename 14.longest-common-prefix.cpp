/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

#include<string>
#include<algorithm>
#include<iostream>
#include<math>
#include<algorithm>
using namespace std;

// @lc code=start




class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l = strs.size();
        int f=0;
        string s = strs[0];
        int m = s.size();
        for(int i=1;i<l;i++){
            string t = strs[i];
            //cout<<s<<" "<<t<<endl;
            // m = min(m,t.size());
            if(m>t.size()){
                m=t.size();
            }
            if(s==t){
                f=1;
            }
            if(s!=t){
                for(int j=1;j<m;j++){
                    //cout<<s.substr(0,j+1)<<" "<<t.substr(0,j+1)<<endl;
                    if(s.substr(0,j+1)==t.substr(0,j+1)){
                        f=1;
                        s = s.substr(0,j+1);
                        m = s.size();

                    }
                }
            }

        }
        if(f==1)
            return s;   
        else
            return "";
    }
};
// @lc code=end

