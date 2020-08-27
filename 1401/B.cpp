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
                    ll x1,x2,y1,y2,z1,z2;
                    cin>>x1>>y1>>z1>>x2>>y2>>z2;

                    ll twos=min(z1,y2);
                    z1-=twos;
                    y2-=twos;
                    ll fours=min(z1,z2);
                    z1-=fours;
                    z2-=fours;
                    z2-=min(z2,x1);
                    ll ntwos=min(y1,z2);
                   	cout<<2*twos-2*ntwos<<endl;
                }
                return 0;
}