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
    string s;
    cin>>s;
    int a;
    string w="";
    vector<string>v;
    for(char c:s)
    {
        if(c>='1' && c<='9') a=c-'0';
        else if(c=='+' || c=='-' || c=='*' || c=='/')
        {
            while(a--)
            {
                v.push_back(w);
            }
            string z="";
            z+=c;
            v.push_back(z);
            w="";
        }
        else w+=c;
    }
    if(w.size()) 
    {
        while(a--) v.push_back(w);
    }
    for(string c:v) cout<<c;
}
int main()
{
    fast;
    solve();
    return 0;
}