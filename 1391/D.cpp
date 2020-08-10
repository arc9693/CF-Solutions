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
                int t=1;
                //cin>>t;
                while(t--)
                {
                    ll n,m;
                    cin>>n>>m;
                    vector<string> v(n);
                    in(v,n);
                    int k=min(n,m);
                    if(k>3) {cout<<-1<<endl;continue;}
                    if(k<=1) {cout<<0<<endl;continue;}
                    int lm=pow(2,k);
                    vector<vector<bool>> ok(lm,vector<bool>(lm,0));
                    for(ll prev=0;prev<lm;prev++)
                    {
                    	ll lb=0;
                    	ll ans=lb;
                    	for(ll j=1;j<k;j++)
                    	{
                    		lb=!(lb^((prev>>(j-1))&1)^((prev>>j)&1));
                    		ans=ans+(lb<<j);
                    	}
                    	ok[prev][ans]=1;
                    	ok[prev][(((1<<k)-1)^ans)]=1;
                    }

                    if(n>m)
                    {
                    	vector<vector<ll>> dp(n,vector<ll>(lm,INT_MAX));
                    	int bt=0;
                    	for(int j=0;j<m;j++)
                		{
                			bt=(bt<<1)+(v[0][j]-'0');
                		}
                		for(int z=0;z<lm;z++)
                		{
                			dp[0][z]=__builtin_popcount(z xor bt);
                		}
                		//cout<<bt<<endl;
                		dp[0][bt]=0;
                    	ll ans=INT_MAX;
                    	for(int i=1;i<n;i++)
                    	{
                    		bt=0;
                    		for(int j=0;j<m;j++)
                    		{
                    			bt=(bt<<1)+(v[i][j]-'0');
                    		}

                    		for(int j=0;j<lm;j++)
                    		{
                    			for(int z=0;z<lm;z++)
                    			{
                    				if(ok[j][z]){

                    					dp[i][z]=min(dp[i][z],dp[i-1][j]+__builtin_popcount(z xor bt));
                    				}
                    				if(i==n-1)
	                    			{
	                    				ans=min(ans,dp[i][z]);
	                    			}
                    			}
                    		}
                    	}
                    	cout<<ans<<endl;

                    }
                    else
                    {
                    	vector<vector<ll>> dp(m,vector<ll>(lm,INT_MAX));
                    	int bt=0;
                    	for(int i=0;i<n;i++)
                		{
                			bt=(bt<<1)+(v[i][0]-'0');
                		}
                		for(int z=0;z<lm;z++)
                		{
                			dp[0][z]=__builtin_popcount(z xor bt);
                		}
                    	ll ans=INT_MAX;
                    	for(int i=1;i<m;i++)
                    	{
                    		bt=0;
                    		for(int j=0;j<n;j++)
                    		{
                    			bt=(bt<<1)+(v[j][i]-'0');
                    		}
                    		for(int j=0;j<lm;j++)
                    		{
                    			for(int z=0;z<lm;z++)
                    			{
                    				if(ok[j][z]){

                    					dp[i][z]=min(dp[i][z],dp[i-1][j]+__builtin_popcount(z xor bt));
                    				}
                    				if(i==m-1)
	                    			{
	                    				ans=min(ans,dp[i][z]);
	                    			}
                    			}
                    		}
                    	}
                    	cout<<ans<<endl;
                    }
                }
                return 0;
}