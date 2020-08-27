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
                    string s;
                    cin>>s;
                    vector<int> sum(n,0);
                    f(i,n)
                    {
                    	sum[i]=s[i]-'0';
                    	if(i>0)
                    		sum[i]+=sum[i-1];
                    	//cout<<sum[i]<<endl;
                    }
                    int ans=0;
                    for(int len=0;len<n;len++)
                    {
                    	for(int i=0;i+len<n;i++)
                    	{
                    		if((sum[i+len]-(i==0?0:sum[i-1]))==len+1) ans++;
                    		//cout<<i<<" "<<i+len<<" "<<(sum[i+len]-(i==0?0:sum[i-1]))<<endl;
                    	}
                    }
                    cout<<ans<<endl;
                }
                return 0;
}