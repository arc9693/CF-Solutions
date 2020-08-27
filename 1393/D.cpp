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
                    ll n,m;
                    cin>>n>>m;
                    vector<string> v(n);
                    in(v,n);
                    vector<vector<int>> dp1(n,vector<int>(m,1));
                    vector<vector<int>> dp2=dp1,dp3=dp1,dp4=dp1;

                    f(i,n)
                    {
                    	f(j,m)
                    	{
                    		if(i==0||j==0) continue;
                    		if(v[i][j]==v[i-1][j]&&v[i][j]==v[i][j-1])
                    			dp1[i][j]=min(dp1[i-1][j],dp1[i][j-1])+1;
                    	}
                    }

                    for(int i=n-1;i>=0;i--)
                    {
                    	f(j,m)
                    	{
                    		if(i==n-1||j==0) continue;
                    		if(v[i][j]==v[i+1][j]&&v[i][j]==v[i][j-1])
                    			dp2[i][j]=min(dp2[i+1][j],dp2[i][j-1])+1;
                    	}
                    }

                    f(i,n)
                    {
                    	for(int j=m-1;j>=0;j--)
                    	{
                    		if(i==0||j==m-1) continue;
                    		if(v[i][j]==v[i-1][j]&&v[i][j]==v[i][j+1])
                    			dp3[i][j]=min(dp3[i-1][j],dp3[i][j+1])+1;
                    	}
                    }

                    for(int i=n-1;i>=0;i--)
                    {
                    	for(int j=m-1;j>=0;j--)
                    	{
                    		if(i==n-1||j==m-1) continue;
                    		if(v[i][j]==v[i+1][j]&&v[i][j]==v[i][j+1])
                    			dp4[i][j]=min(dp4[i+1][j],dp4[i][j+1])+1;
                    	}
                    }

                    ll ans=0;
                    f(i,n)
                    {
                    	f(j,m)
                    	{
                    		ans+=min(min(dp1[i][j],dp2[i][j]),min(dp3[i][j],dp4[i][j]));
                    	}
                    }

                    cout<<ans<<endl;
                }
                return 0;
}