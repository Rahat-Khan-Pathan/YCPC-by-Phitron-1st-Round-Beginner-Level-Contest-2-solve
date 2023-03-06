/*
||-----------------------------------||
||        Rahat Khan Pathan          ||
||         Programming Hero          ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
int dp[1005][1005];
int knapsack(int v[],int w[],int n,int W)
{
    if(n==0 || W==0) return 0;
    if(dp[n][W] != -1) return dp[n][W];
    if(w[n-1]<=W)
    {
        return dp[n][W]=max(v[n-1]+knapsack(v,w,n-1,W-w[n-1]),knapsack(v,w,n-1,W));
    }
    else 
    {
        return dp[n][W]=knapsack(v,w,n-1,W);
    }
}
void solve()
{
    int n,W;
    cin>>n>>W;
    int v[n],w[n];
    for(int i=0;i<n;i++) cin>>w[i];
    for(int i=0;i<n;i++) cin>>v[i];
    memset(dp,-1,sizeof(dp));
    cout<<knapsack(v,w,n,W)<<endl;
}
int main()
{
    fast;
    solve();
    return 0;
}