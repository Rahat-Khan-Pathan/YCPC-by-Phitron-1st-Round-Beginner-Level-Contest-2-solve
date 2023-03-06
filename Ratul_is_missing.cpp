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
void solve()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        if(word=="Ratul")
        {
            yes;
            return;
        }
    }
    no;
}
int main()
{
    fast;
    solve();
    return 0;
}