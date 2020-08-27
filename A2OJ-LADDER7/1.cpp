/*
@author: arc_9693
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define mod 1000000007
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
#define in(a,n) f(i,n){cin>>a[i];}
#define ou(a,n) f(i,n){cout<<a[i]<<" ";}cout<<endl;
#define sv(v) sort(v.begin(),v.end());
#define sa(a,n) sort(a,a+n);
#define mp make_pair
#define pb push_back
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vec vector<ll>
#define vec_p vector<pair<ll,ll>>
int main()
{               
				ios::sync_with_stdio(false);
                cin.tie(0);
                int t,k;
                cin>>t>>k;
                int m=1e5+1;
                vector<ll> dp(m);
                dp[0]=1;
                for(int i=1;i<m;i++)
                {
                	dp[i]=dp[i-1];
                	dp[i]%=mod;
                	if(i-k>=0)
                		dp[i]+=dp[i-k];
                	dp[i]%=mod;
                }

                for(int i=1;i<m;i++)
                {
                	dp[i]+=(dp[i-1]);
                	dp[i]%=mod;
                }
               	while(t--)
                {
                    int a,b;
                    cin>>a>>b;
                    cout<<(mod+dp[b]-dp[a-1])%mod<<endl;
                }	
                return 0;
}