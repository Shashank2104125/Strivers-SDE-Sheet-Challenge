#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int t=0,l=0;
   int b=n-1,r=m-1;
    int d=0;
    int prev=0,cur=0;
    if(n==1 || m==1 || n==0 || m==0){
        return;
    }else{
    while(t<=b && l<=r){
        if(d==0){
           if(l==r) break;
            else if(t==b) break;
            prev=mat[t+1][l];
            for(int i=l;i<=r;i++){
                cur=mat[t][i];
                mat[t][i]=prev;
                prev=cur;
            }
            d=1;
            t+=1;
        }else if(d==1){
            for(int i=t;i<=b;i++){
                cur=mat[i][r];
                mat[i][r]=prev;
                prev=cur;
            }
            d=2;
            r-=1;
        }else if(d==2){
            for(int i=r;i>=l;i--){
                cur=mat[b][i];
                mat[b][i]=prev;
                prev=cur;
            }
            d=3;
            b-=1;
        }else if(d==3){
            for(int i=b;i>=t;i--){
                cur=mat[i][l];
                mat[i][l]=prev;
                prev=cur;
            }
           d=0;
            l+=1;  
        }
       
    }
    }

}