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
                map<int, int> mp,four,two,six,eight;
                f(i,t)
                {
                	int a;
                	cin>>a;
                	if(mp.find(a)==mp.end()) mp[a]=0;
                	mp[a]++;
                	if(mp[a]>=8)
                	{
                		six.erase(a);
                		eight[a]=1;
                	}
                	else if(mp[a]>=6)
                	{
                		four.erase(a);
                		six[a]=1;
                	}
                	else if(mp[a]>=4)
                	{
                		two.erase(a);
                		four[a]=1;
                	}
                	else if(mp[a]>=2)
                	{
                		two[a]=1;
                	}
                }

                int q;
                cin>>q;
                while(q--)
                {
                	char s;
                	int a;
                	cin>>s>>a;
                	if(s=='+')
                	{
                		if(mp.find(a)==mp.end()) mp[a]=0;
                		mp[a]++;
                		if(mp[a]>=8)
	                	{
	                		six.erase(a);
	                		eight[a]=1;
	                	}
	                	else if(mp[a]>=6)
	                	{
	                		four.erase(a);
	                		six[a]=1;
	                	}
	                	else if(mp[a]>=4)
	                	{
	                		two.erase(a);
	                		four[a]=1;
	                	}
	                	else if(mp[a]>=2)
	                	{
	                		two[a]=1;
	                	}
                	}
                	else 
                	{
                		int prev=mp[a];
                		mp[a]--;
                		if(prev==8)
                		{
                			eight.erase(a);
                			six[a]=1;
                		}
                		else if(prev==6)
                		{
                			six.erase(a);
                			four[a]=1;
                		}
                		else if(prev==4)
                		{
                			four.erase(a);
                			two[a]=1;
                		}
                		else if(prev==2)
                		{
                			two.erase(a);
                		}
                	}



                	//cout<<eight.size()<<" "<<six.size()<<" "<<four.size()<<" "<<two.size()<<endl;
                	int e=eight.size();
                	int si=six.size();
                	int f=four.size();
                	int t=two.size();

                	bool sq=0;
                	bool rec=0;
                	if(e)
                	{

                		sq=1;
                		rec=1;
                	}
                	else if(si)
                	{
                		sq=1;
                		if(t||f||si>=2)
                			rec=1;
                	}
                	else if(f)
                	{
                		sq=1;
                		if(f>=2||t>=2)
                			rec=1;
                	}
                	if(sq&&rec) cout<<"YES"<<endl;
                	else cout<<"NO"<<endl;

                }
                return 0;
}