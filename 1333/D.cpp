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
               // cin>>t;
                while(t--)
                {
                    ll n,m,p;
                    cin>>n>>m>>p;
                  //  cout<<n<<m<<p<<endl;
                    vec r(n),g(m),b(p);
                    in(r,n);
                    in(g,m);
                    in(b,p);
                    sv(r);
                    sv(g);
                    sv(b);
                    int i=n-1,j=m-1,k=p-1;
                    ll total_area=0;
                    while(i>=0||j>=0||k>=0)
                    {
                    	ll mx=INT_MIN;
                    	if(i>=0)
                    		mx=max(mx,r[i]);
                    	if(j>=0)
                    		mx=max(mx,g[j]);
                    	if(k>=0)
                    		mx=max(mx,b[k]);

                    	int last_changed;
                    	if(i>=0&&mx==r[i]) {i--; last_changed=0;}
                    	else if(j>=0&&mx==g[j]) {j--; last_changed=1;}
                    	else {k--; last_changed=2;}
                    	//cout<<mx<<" l=="<<last_changed<<" ";

                    	//cout<<((i>=0)||(j>=0)||(k>=0))<<" ";
                    	if((i>=0&&last_changed!=0)||(j>=0&&1!=last_changed)||(k>=0&&2!=last_changed))
                    	{
                    		ll smx=INT_MIN;
	                    	if(i>=0&&last_changed!=0)
	                    		smx=max(smx,r[i]);
	                    	if(j>=0&&last_changed!=1)
	                    		{
	                    		//	cout<<"\nconsidered 1"<<endl;
	                    			smx=max(smx,g[j]);
	                    		}
	                    	if(k>=0&&last_changed!=2)
	                    		{
	                    			//cout<<"considered 2"<<b[k]<<endl;
	                    			smx=max(smx,b[k]);
	                    		}

	                    	if(i>=0&&last_changed!=0&&smx==r[i]) i--;
	                    	else if(j>=0&&last_changed!=1&&smx==g[j]) j--;
	                    	else k--;

	                    	//cout<<smx<<endl;
	                    	total_area+=(mx*smx);
                    	}
                    	else break;
                    }
                    cout<<total_area<<endl;
                }
                return 0;
}