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
                    bool f=0;
                    for(int i=2;i<n;i++)
                    {
                    	if(v[0]+v[1]<=v[i])
                    	{
                    		cout<<1<<" "<<2<<" "<<i+1<<endl;
                    		f=1;
                    		break;
                    	}
                    }
                    if(!f)
                    	cout<<-1<<endl;
                }
}