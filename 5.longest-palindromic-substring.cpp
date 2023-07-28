/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
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
    vector<char> slicing(vector<char>& arr,int X, int Y)
    {
 
        // Starting and Ending iterators
        auto start = arr.begin() + X;
        auto end = arr.begin() + Y + 1;
    
        // To store the sliced vector
        vector<char> result(Y - X + 1);
    
        // Copy vector using copy function()
        copy(start, end, result.begin());
    
        // Return the final sliced vector
        return result;
    }
    
    string longestPalindrome(string s) {
        vector<char> st;
        int ind=0,r=0,x,y;
        st.push_back('#');
        for(int i =0;i<s.size();i++){
            st.push_back(s[i]);
            st.push_back('#');
        }
        int l = st.size();
        vector<int> v(l,0);
        for(int i=0;i<l;i++){
            if(i<r){
                if(v[2*ind-i]<r-i){
                    v[i]=v[2*ind-i];
                    continue;
                }
            }

            int x = 1;
            while(i-x>=0 && i+x<l && st[i-x]==st[i+x]){
                x++;
            }
            v[i]=x;

            if(i+x>r){
                ind = i;
                r=i+x;
            }
        }
        r=0;
        for(int i=0;i<l;i++){
            //cout<<v[i]<<endl;
            if(v[i]>r){
                ind =i;
                r=v[i];
            }
        }
        //cout<<ind<<" "<<r<<endl;

        vector<char> ss = slicing(st,ind-r+1,ind+r-1);
        vector<char> tt;
        for(int i=0;i<ss.size();i++){
            if(ss[i]!='#'){
                tt.push_back(ss[i]);
            }
        }
        string ans(tt.begin(),tt.end());
        return ans; 
        
    }
};
// @lc code=end

