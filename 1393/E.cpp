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
                    vector<vector<pair<string,int>>> ss(n);
                    f(i,n)
                    {
                    	map<string,int> smp;
                    	string s;
                    	cin>>s;
                    	smp[s]=1;
                    	f(j,s.size())
                    	{
                    		string curr=s.substr(0,j)+s.substr(j+1,s.size()-j);
                    		if(smp[curr]>=1)
                    			smp[curr]++;
                    		else smp[curr]=1;
                    	}
                    	for(auto it=smp.begin();it!=smp.end();it++)
                    		ss[i].pb(mp(it->first,it->second));
                    	sv(ss[i]);
                    }
                    

                    vector<int> *ans=NULL;
					ll sol=0;
                    for(int i=0;i<n;i++)
                    {
                    	vector<int> *tp=new vector<int>();
                    	if(i==0)
                    	{
                    		for(int j=0;j<ss[i].size();j++)
                    			tp->pb(ss[i][j].second);
                    		ans=tp;
                    		continue;
                    	}
                    	for(int j=0;j<ss[i].size();j++)
                    	{
                    		int p=0;
                    		ll sum=0;
		                    while (p < ss[i-1].size() && ss[i-1][p].first<=ss[i][j].first)
		                    {
		                    	
		                    	//cout<<p<<" "<<ans->size()<<" "<<ss[i-1].size()<<endl;
		                    	ll curr=(*ans)[p++]*(ss[i][j].second);
		                    	curr%=mod;
		                        sum += curr;
		                        sum%=mod;
		                    }
 							tp->pb(sum);
 							if(i==n-1)
 							{
 								sol+=(sum);
 								sol%=mod;
 							}
                		}
                		delete(ans);
                		ans=tp;
                    }
                   	cout<<sol<<endl;
                }
                return 0;
}