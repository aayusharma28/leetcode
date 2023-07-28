/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int a[20];
        memset(a,0,sizeof(a));
        int y =x;
        int i =0;
        while(y>0){
            a[i]= y%10;
            y=y/10;
            i++;
        }
        // i=i/2;
        // i++;
        i--;
        int j=0;
        while(i>j){
            if(a[i]==a[j]){
                i--;
                j++;
            }
            else{
                return false;
            }
        }
        return true;    
    }
};
// @lc code=end

