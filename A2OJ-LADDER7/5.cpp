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
              //  cin>>t;
                while(t--)
                {
                    ll n,k;
                    cin>>n>>k;
                    vector <vec> dp(n+1,vec(k+1,1));
                    vector <vec> pos(n+1);
                    
                    for(int i=1;i<=n;i++)
                    {
                    	
                    	for(int j=1;j<=i;j++)
                    	{
                    		if(i%j==0) {pos[i].pb(j);}
                    	}
                    	
                    }
                    

                    ll total_ways=0;
                    for(int i=2;i<=k;i++)
                    {
                    	
                    	for(int j=1;j<=n;j++)
                    	{
                    		dp[j][i]=0;
                    		for(int z=0;z<pos[j].size();z++)
                    		{
                    			
                    			dp[j][i]+=dp[pos[j][z]][i-1];
                    			dp[j][i]%=mod;
                    		}
                    		
                    		if(i==k)
                    			{
                    				total_ways+=dp[j][i];
                    				total_ways%=mod;
                    			}
                    	}
                    	
                    }
                    cout<<(k==1?(n%mod):total_ways)<<endl;
                }
                return 0;
}