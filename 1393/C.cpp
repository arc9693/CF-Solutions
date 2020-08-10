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
                cin>>t;
                while(t--)
                {
                    ll n;
                    cin>>n;
                    vec v(n);
                    in(v,n);
                    map<int, int> mp;
                    int mx=0;
                    f(i,n)
                    {
                    	if(mp.find(v[i])==mp.end()) mp[v[i]]=0;
                    	mp[v[i]]++;
                    	mx=max(mp[v[i]],mx);
                    }
                    int count=-1;
                    for(auto it=mp.begin();it!=mp.end();it++)
                    {
                    	if(it->second==mx) count++;
                    }

                    //if(mx>1)
                    cout<<(n-mx-count)/(mx-1)<<endl;
                	//else cou
                }
                return 0;
}