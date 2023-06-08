#include <bits/stdc++.h> 
int maximumProfit(vector<int> &v){
    // Write your code here.
     int profit=0;
         int min=INT_MIN;
         vector<int> maxValue=v;
         // creating the max value array
         for(int i=v.size()-1;i>=0;i--){
             min=max(min,maxValue[i]);
            maxValue[i]=max(maxValue[i],min);
         }
         for(int i=0;i<v.size();i++){
             profit=max(profit,maxValue[i]-v[i]);
         }
           return profit;
}





