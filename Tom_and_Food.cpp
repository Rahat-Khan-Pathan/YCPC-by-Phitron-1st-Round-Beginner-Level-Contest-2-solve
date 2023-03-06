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
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll i=0,j=0,x=1;
    ll s=0,ans=0;
    while(j<n)
    {
        s+=a[j];
        ans=max(ans,s);
        if(x<k)
        {
            x++;
            j++;
        }
        else 
        {
            s-=a[i];
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    ll t;cin>>t;
    while(t--)
        solve();
    return 0;
}