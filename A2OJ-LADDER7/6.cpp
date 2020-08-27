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
                    ll n,m,k;
                    cin>>n>>m>>k;
                    ll l=1;
                    ll h=n*m+1;
                    while(l<h)
                    {
                    	ll mid=(l+h)>>1;
                    	ll count=0;
                    	for(ll i=1;i<=n;i++)
                    	{
                    		count+=(min(m,(mid-1)/i));
                    	}
                    	if(count>=k)
                    	{
                    		h=mid;
                    	}
                    	else l=mid+1;

                    }
                    cout<<l-1<<endl;
                }
                return 0;
}