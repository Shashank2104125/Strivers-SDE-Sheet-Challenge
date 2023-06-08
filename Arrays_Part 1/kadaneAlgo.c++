#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long m=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
         m=max(m,sum);
        if(sum<0){
          sum=0;
        }
    } 
    if(m<0) m=0;
    return m;
}

