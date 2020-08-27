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
                   string s;
                   cin>>s;
                   int n=s.size();
                   vec v;
                   int count=0;
                   int i=0;
                   while(i<n)
                   {
                   		while(i<n&&s[i]=='1')
                   				{
                   					count++;
                   					i++;
                   				}
                   		if(count)
                   			{
                   				v.pb(count);
                   				count=0;
                   			}
                   		else i++;
                   }
                   sv(v);
                   int ans=0;
                   for(int i=v.size()-1;i>=0;i-=2)
                   {
                   	 	ans+=v[i];
                   }
                   cout<<ans<<endl;
                }
                return 0;
}