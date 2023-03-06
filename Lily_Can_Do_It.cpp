/*
||-----------------------------------||
||        Rahat Khan Pathan          ||
||         Programming Hero          ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll e=0,od=0;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a%2==0) e++;
            else od++;
        }
        if(e && od) yes;
        else no;
    }
    return 0;
}