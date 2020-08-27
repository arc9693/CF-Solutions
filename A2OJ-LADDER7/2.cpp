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
                    ll n;
                    cin>>n;
                    vec p(n),s(5),c(5,0);
                    in(p,n);
                    in(s,5);
                    ll init=0;
                    f(i,n)
                    {
                    	init+=p[i];
                    	f(j,5)
                    	{
                    		c[4-j]+=(init/s[4-j]);
                    		init=init-((init/s[4-j])*s[4-j]);
                    		
                    	}
                    }
                    ou(c,5);
                    cout<<init<<endl;
                }
                return 0;
}