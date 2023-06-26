/*
Tribonacci series given : T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0;
  */

#include<bits/stdc++.h>
using namespace std;


int fun(int n)
{
   vector<int>dp(n+1,0);
  if(n==0)return 0;
  if(n==2 || n==1)
    return 1;
  dp[0]=0;
  dp[1]=1;
  dp[2]=1;

  for(int i=3;i<=n;i++)
    {
      dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
  return dp[n];
  
}
int main()
{
  int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
  cout<<fun(n);
}}
