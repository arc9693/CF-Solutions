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

class graph
{
	int n; // number of vertices
	vector<vector<int>> adj; // adjacenecy list
	vector<vector<bool>> g;

	public:

		graph(int v=0){
			n=v;
			adj.resize(n);
			g.resize(n,vector<bool>(n,0));
		}

		void input(int edges=0)
		{
			int a,b;
			for(int i=0;i<edges;i++)
			{
				cin>>a>>b;
				a--;
				b--;
				adj[a].pb(b);
				g[a][b]=1;
			}
		}

		void solve()
		{
			ll ans=0;
			f(a,n)
			{
				f(c,n)
				{
					if(a!=c)
					{

						ll count=0;
						f(b,adj[a].size())
						{
							int m=adj[a][b];
							if(a!=m&&c!=m&&g[m][c])
								count++;
						}
						ans+=((count*(count-1))/2);
					}
				}
				
			}
			cout<<ans<<endl;
		}

};

int main()
{               
				ios::sync_with_stdio(false);
                cin.tie(0);
                int t=1;
               // cin>>t;
                while(t--)
                {
                    ll n,m;
                    cin>>n;
                    cin>>m;
                    graph g(n);
                    g.input(m);
                    g.solve();
                }
                return 0;
}