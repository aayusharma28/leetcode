/*
 * @lc app=leetcode id=316 lang=cpp
 *
 * [316] Remove Duplicate Letters
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

    string removeDuplicateLetters(string s) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        int n = s.size();
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        stack<char> st;
        string p;
        st.push(s[0]);
        a[s[0]-'a']--;
        b[s[0]-'a']++;
        for(int i=1;i<n;i++){
            if(s[i]<st.top() && b[s[i]-'a']==0){
                while(s[i]<st.top()){
                    if(a[st.top()-'a']>=1){
                        b[st.top()-'a']--;
                        st.pop();
                        if(!st.empty()){
                            if(s[i]>st.top()){
                                st.push(s[i]);
                                a[s[i]-'a']--;
                                b[s[i]-'a']++;
                            }
                        }
                    }
                    else{
                        if(b[s[i]-'a']==0){
                            st.push(s[i]);
                            a[s[i]-'a']--;
                            b[s[i]-'a']++;
                        }
                    }
                    if(st.empty()){
                        st.push(s[i]);
                        a[s[i]-'a']--;
                        b[s[i]-'a']++;
                    }
                }
            }
            else{
                if(b[s[i]-'a']==0){
                    st.push(s[i]);
                    a[s[i]-'a']--;
                    b[s[i]-'a']++;
                }
                else{
                    a[s[i]-'a']--;
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

