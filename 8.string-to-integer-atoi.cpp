/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */



#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

// @lc code=start

typedef long long ll;
class Solution {
public:
    int myAtoi(string s) {
        int l = s.size();
        int n =0;
        int p=0;
        int a[200];
        int j=0;
        int h,y=0;
        memset(a,0,sizeof(a));
        for(int i=0;i<l;i++){
            if(s[i]==' '){
                h=9;
                if(n==1 && p!=0){
                    break;
                }
                if(y==1){
                    break;
                }
                if(p!=0){
                    break;
                }
            }
            else{
                if(n==0 && p==0){
                    if(s[i]=='+'){
                        p=1;
                    }
                    else if(s[i]=='-' && y==0){
                        p=-1;
                    }
                    else if(s[i]<'0' || s[i]>'9'){
                        return 0;
                    }
                    else{
                        if(s[i]!='0'){
                            a[j]=s[i]-'0';
                            j++;
                            p=1;
                            n=1;    
                        }
                        else{
                            y=1;
                        }
                    }
                }
                else if(s[i]>='0' && s[i]<='9' && n==0){
                    a[j]=s[i]-'0';
                    j++;
                    if(p==0){
                        p=1;
                    }
                    n=1;
                }
                else if(s[i]>='0' && s[i]<='9' && n==1){
                    a[j]=s[i]-'0';
                    
                    j++;
                }
                else if(s[i]<'0' || s[i]>'9'){
                    n=2;
                }
            }
        }
        ll m =1;
        ll result =0;
        int z=0;
        for(int i =j-1;i>=0;i--){
            if(z==0 && a[i]==0 && a[i+1]==0){
                if(m==1000000000000000000){
                    m=100000000000000000;
                }
                m=m*10;
            }
            if(z==0 && a[i]!=0){
                z=1;
            }
            if(z==1){
                if(result>=2147483648){
                    result=2147483649;
                    break;
                }
                result+=a[i]*m;
                if(m==1000000000000000000){
                    m=100000000000000000;
                }
                m=m*10;
                
            }
            
            cout<<a[i]<<" "<<i<<endl;
        }

        if(result>=2147483648){
            if(p==1)
                result=2147483647;
            else
            {
                result=2147483648;
            }
            
        }
        
        return result*p;
    }
};

// @lc code=end

