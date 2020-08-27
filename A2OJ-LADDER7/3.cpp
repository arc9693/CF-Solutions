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

vector<int> st;

ll construct(ll l,ll h,vec &v,bool isor,int index)
{
	if(l>h) return 0;
	
	if(l==h) 
	{ 
		st[index]=v[l];
		return st[index];
	}

	ll m=(l+h)/2;
	ll left=construct(l,m,v,!isor,2*index+1);
	ll right=construct(m+1,h,v,!isor,2*index+2);
	ll value;
	if(isor)
		value=left|right;
	else value=left^right;
	st[index]=value;
	return st[index];
}

ll update(ll l,ll h,bool isor,int index,ll p,ll b)
{
	if(l>h) return 0;
	//cout<<index<<endl;
	ll m=(l+h)/2;
	if(l==h&&l==p) 
	{ 
		st[index]=b;
		return st[index];
	}
	ll left=st[index*2+1];
	ll right=st[index*2+2];
	if(p>=l&&p<=m)
		left=update(l,m,!isor,2*index+1,p,b);
	else 
		right=update(m+1,h,!isor,2*index+2,p,b);
	ll value;
	if(isor)
		value=left|right;
	else value=left^right;
	st[index]=value;
	return st[index];
}

int main()
{               
				ios::sync_with_stdio(false);
                cin.tie(0);
                int t=1;
               // cin>>t;
                while(t--)
                {
                    ll n,m;
                    cin>>n>>m;
                    ll sz=pow(2,n);
                    st.resize(pow(2,n+1)-1);
                    //cout<<pow(2,n+1)-2<<endl;
                    vec v(sz);
                    in(v,sz);
                    construct(0,sz-1,v,n%2,0);
                    while(m--)
                    {
                    	ll p,b;
                    	cin>>p>>b;
                    	p--;
                    	cout<<update(0,sz-1,n%2,0,p,b)<<endl;
                    }
                    
                }
                return 0;
}