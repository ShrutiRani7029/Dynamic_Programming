#include<bits/stdc++.h>
using namespace std;

int fun(int n){
//base case
vector<int>dp(n+1,0);
if(n<=1)return n;
dp[0]=1;
dp[1]=1;
for(int i=2;i<n;i++)dp[i]=dp[i-1]+dp[i-2];
return dp[n-1];

}



int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    cout<<fun(n);
    }
}
