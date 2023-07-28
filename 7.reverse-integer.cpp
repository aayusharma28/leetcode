/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */


#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
//#include <reverse>
// @lc code=start
typedef long long ll;
class Solution {
public:
    int reverse(int x) {
        if(x==0){
            return x;
        }
        int a[32];
        memset(a,0,sizeof(a));
        ll y =abs(x);
        int i=0;
        while(y){
            a[i]=y%10;
            y=y/10;
            i++;
        }
        ll result=0;
        ll m =1;
        i--;
        for(int j=i;j>=0;j--){
            result+=a[j]*m;
            m=m*10;
        }
        
        m = abs(x)/x;
        if(result>=2147483648){
            return 0;
        }
        else{
            return result*m;
        }
    }
};
// @lc code=end

