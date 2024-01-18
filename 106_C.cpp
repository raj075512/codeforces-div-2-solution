// #pragma GCC optimize("O3,unroll-loops")

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

#define _test int tc;cin>>tc;while(tc--)

bool revsort(ll a, ll b) {return a > b;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}



void solve()
{
    int n;
    cin>>n;
      
     int a[n];
     for(auto &it:a)
     cin>>it;

  
    int pref[n+1],suff[n+1];
    pref[0]=1;
    suff[n-1]=1;

    for(int i=1;i<n;++i)
    {
        if(i==n-1)
        {
            pref[i]=0;
        }else
        {
            if(abs(a[i+1]-a[i])<abs(a[i]-a[i-1]))
                pref[i]=pref[i-1]+1;
            else
                pref[i]=pref[i-1]+abs(a[i]-a[i+1]);
           
        }

    }
    for(int i=n-2;i>=0;--i)
    {
        if(i==0)
            suff[i]=0;
        else
         {
            if(abs(a[i+1]-a[i])>abs(a[i]-a[i-1]))
            {
                suff[i]=suff[i+1]+1;
            }else
            suff[i]=suff[i+1]+abs(a[i]-a[i-1]);
         }
    }
 for(int i=n;i>=1;--i)
 {
   pref[i]=pref[i-1];
   
 }
 suff[n]=0;
 pref[0]=0;
   




     int q;
     cin>>q;
     while(q--)
     {
        int src, des;
        cin>>src>>des;
        
        if(src<des)
        {
            cout<<pref[des-1]-pref[src-1]<<"\n";
        }else
        {
            cout<<suff[des]-suff[src]<<"\n";
        }

     } 

}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
_test{
       solve();
     }


    return 0;
}