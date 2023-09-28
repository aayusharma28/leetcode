/*
 * @lc app=leetcode id=880 lang=cpp
 *
 * [880] Decoded String at Index
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
    string decodeAtIndex(string s, int k) {

        int n = s.size();
        long long int l=0;
        int i=0;
        while(l<k){
            if(isdigit(s[i])){
                l = l*(s[i]-'0');
            }
            else{
                l++;
            }
            i++;
        }
        for(int j = i-1;j>=0;j--){
            if(isdigit(s[j])){
                l = l/(s[j]-'0');
                k = k%l;
            }
            else{
                if(l==k || k==0){
                    return string(1,s[j]);
                }
                l--;
            }
        }
        return "a";
    }
};
// @lc code=end

