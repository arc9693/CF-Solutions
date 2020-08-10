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
	vector<bool> visited; // to track visited
	vector<int> topo;
	vector<vector<int>> dep;
	bool path=0;
	public:

		graph(int v=0){
			n=v;
			adj.resize(n,vector<int>());
			dep.resize(n,vector<int>());
			visited.resize(n,0);
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
				adj[b].pb(a);
				//cout<<a<<" "<<b<<endl;
			}
		//	cout<<endl;
		}

		void dfs()
		{
			fill(visited.begin(),visited.end(),0);
			for(int i=0;i<n;i++)
			{
				if(!visited[i]&&!path)
					dfsUtil(i,0);
			}
			
			if(dep[ceil(n/2)].size()==0&&!path)
			{
				cout<<"PAIRING"<<endl;
				int ans=0;
				for(int i=n-1;i>=0;i--)
				{
					if(dep[i].size())
					{
						for(int j=0;j+1<dep[i].size();j+=2)
							{
								ans++;
							}
					}
				}
				cout<<ans<<endl;
				for(int i=n-1;i>=0;i--)
				{
					if(dep[i].size())
					{
						for(int j=0;j+1<dep[i].size();j+=2)
								cout<<dep[i][j]+1<<" "<<dep[i][j+1]+1<<endl;
					}
				}
			}
			
		}

		void dfsUtil(int u,int d)
		{
			//cout<<u<<endl;
			visited[u]=1;
			topo.pb(u);
			if(d>=ceil(n/2))
			{
				cout<<"PATH"<<endl;
				cout<<topo.size()<<endl;
				for(int i=0;i<topo.size();i++)
					cout<<topo[i]+1<<" ";
				cout<<endl;
				path=1;
				return;
			}
			dep[d].push_back(u);
			for(int i=0;i<adj[u].size();i++)
			{
				if(!visited[adj[u][i]]&&!path)
					dfsUtil(adj[u][i],d+1);
			}
			topo.pop_back();
		}

		void bfs(int src=0) // shortest distance
		{
			vector<int> dist(n,-1);
			queue<int> Q;
    		Q.push(src);
    		dist[src] = 0;
    		while(!Q.empty()) {
        		int u = Q.front();
        		Q.pop();
        		for(int i = 0; i < adj[u].size(); i++) {
		            int v = adj[u][i];
		            if(dist[v] == -1) {
		                dist[v] = dist[u] + 1;
		                Q.push(v);
            		}
		        }
		    }
		}	
};

int main()
{               
				ios::sync_with_stdio(false);
                cin.tie(0);
                int t=1;
                cin>>t;
                while(t--)
                {
                    ll n,m;
                   // m=n-1;

                    cin>>n;
                    cin>>m;

                    graph g(n);
                    g.input(m);
                    g.dfs();
                  //  g.bfs();
                }
                return 0;
}