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
                    ll n,x;
                    string w,s;
                    cin>>s>>x;
                    n=s.size();
                    w.resize(n,'-');
                    bool ans=0;
                    
                    for(ll i=0;i<x;i++)
                    {
                    	if(s[i]=='1')
                    	{
                    		if(i+x>=n) ans=1;
                    		else
                    		{
                    			w[i+x]='1';
                    		}
                    	}
                    	else
                    	{
                    		if(i+x>=n);
                    		else w[i+x]='0';
                    	}
                    	if(ans) break;
                    	//cout<<w<<" ";
                    }


                    for(ll i=x;i+x<n;i++)
                    {
                    	if(s[i]=='1')
                    	{
                    		if(w[i-x]=='-'||w[i-x]=='1') w[i-x]='1';
                    		else if(w[i+x]=='-'||w[i+x]=='1') w[i+x]='1';
                    		else ans=1;
                    	}
                    	else
                    	{
                    		if(w[i-x]=='1'||w[i+x]=='1') ans=1;
                    		else 
                    			{
                    				
                    				w[i-x]=w[i+x]='0';
                    			}
                    	}
                    	if(ans) break;
                    	//cout<<w<<" ";
                    }

                    //cout<<w<<endl;
                    for(ll i=n-x;i<n;i++)
                    {
                    	//cout<<i-x<<endl;
                    	if(s[i]=='1')
                    	{
                    		if(i-x>=0&&(w[i-x]=='-'||w[i-x]=='1')) w[i-x]='1';
                    		else ans=1;
                    	}
                    	else
                    	{
                    		if(i-x>=0&&(w[i-x]=='-'||w[i-x]=='0')) w[i-x]='0';
                    		else if(i-x>=0) ans=1;
                    	}
                    	if(ans) break;
                    	//cout<<w<<" ";
                    }
                   //  cout<<ans<<endl;
                    f(i,n)
                    {
                    	if(w[i]=='-') w[i]='0';
                    }

                    if(ans) cout<<-1<<endl;
                    else 
                     	cout<<w<<endl;

                }
                return 0;
}