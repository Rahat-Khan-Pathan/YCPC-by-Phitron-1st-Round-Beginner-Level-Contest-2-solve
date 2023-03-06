/*
||-----------------------------------||
||        Rahat Khan Pathan          ||
||         Programming Hero          ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll x,d1,d2;
    cin>>x>>d1>>d2;
    ll ans=ceil((x*d1*1.0)/d2*1.0);
    cout<<ans<<endl;
}
int main()
{
    ll t;cin>>t;
    while(t--)
        solve();
    return 0;
}