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
                    vec v(n),v2(m);
                    in(v,n);
                    in(v2,m)
                    sv(v2);
                    sv(v);
                    ll ans=INT_MAX;
                    f(j,m)
                    {
                    	ans=min(ans,v[n-1]&v2[j]);
                    }
                    //cout<<ans<<endl;
                    for(int i=n-2;i>=0;i--)
                    {
                    	ll mi=0;
                    	f(j,m)
                    	{
                    		ll curr=v[i]&v2[j];
                    		if((curr|ans)<(ans|(v[i]&v2[mi])))
                    			mi=j;
                    	}
                    	ans=ans|(v[i]&v2[mi]);
                    }
                    cout<<ans<<endl;
                }
                return 0;
}