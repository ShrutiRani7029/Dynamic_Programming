/*You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.*/

#include<bits/stdc++.h>
using namespace std;

int fun2(int i, vector<int>&v,vector<int>&dp){
    
    
    
    ///base cases----->
    if(i>=v.size())return 0;
    if(dp[i]!=-1)return dp[i];
    ///base case<-------
    
    
    int op1=fun2(i+1,v,dp);
    int op2=fun2(i+2,v,dp);
    return dp[i]=min(op1,op2) + v[i];
}

int fun(vector<int>&c){
    int n=c.size();
    vector<int>dp(n+1,-1);
    return min(fun2(0,c,dp),fun2(1,c,dp));
    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        
        for(int i=0;i<n;i++)cin>>v[i];
        
        int ans=fun(v);
        cout<<ans<<endl;
    }
}
