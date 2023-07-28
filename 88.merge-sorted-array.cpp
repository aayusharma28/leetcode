/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// @lc code=start

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int f = INT_MIN;
        int z = m+n;
        for(int j=0;j<n;j++){
            nums1[m+j]=f;
        }
        sort(nums1.begin(),nums1.end());
        if(nums2.size()!=0){
            
            int x = n;
            int y = 0;
            int i=0;
            int o=0;
            if(m==0){
                o=1;
            }
            for(int j=0;j<z;j++){
                if(o==0){
                    if(nums1[x]<=nums2[y]){
                        nums1[i]=nums1[x];
                        nums1[x]=f;
                        i++;
                        x++;
                        if(x==z){
                            o=1;
                        }
                    }
                    else{
                        nums1[i]=nums2[y];
                        nums2[y]=f;
                        i++;
                        y++;
                        if(y==n){
                            o=2;
                        }
                    }
                }
                else if(o==1){
                    nums1[i]=nums2[y];
                    nums2[y]=f;
                    i++;
                    y++;
                }
                else if(o==2){
                    nums1[i]=nums1[x];
                    if(x!=z-1 && x!=i)
                        nums1[x]=f;
                    i++;
                    x++;
                }
            }
        }
    }
};

// @lc code=end

