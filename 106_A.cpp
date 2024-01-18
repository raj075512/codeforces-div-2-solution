#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
#define ll long long 
#define vi vector<int>
#define all(x) begin(x),end(x)
#define sz(x) (int)size(x) 
#define minPq priority_queue<int,vector<int>,greater<int>> 
#define maxPq priority_queue<int> 
#define vvi vector<vector<int>>
#define ff first 
#define ss second
#define pii pair<int,int>
#define vvpii vector<vector<pair<int,int>>>
#define vvc vector<vector<char>>
#define vvpci vector<vector<pair<char, int>>>
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
 
bool revsort(ll a, ll b) {return a > b;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
 
 
 
#define _test int tc;cin>>tc;while(tc--)
 
 
void solve()
{
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    bool fl=false;
    for(int i=0;i<n;++i)
    {
       if(c[i]!=a[i] && c[i]!=b[i])
       {
         fl=true;
         break;
 
       }
    }
 
    if(fl)
        cout<<"YES\n";
    else
        cout<<"NO\n";
 
    
}
 
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
_test{
       solve();
     }
 
 
    return 0;
}