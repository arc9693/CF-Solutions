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
                    vec v(n);
                    in(v,n);
                    ll mi=INT_MAX;
                    f(i,n)
                    {
                        mi=min(mi,v[i]);
                    }
                    vec facs;
                    f(i,n)
                    {
                        if(v[i]%mi==0) facs.pb(v[i]);
                    }
                    sv(facs);
                    int j=0;
                    f(i,n)
                    {
                        if(v[i]%mi==0) v[i]=facs[j++];
                    }
                    bool f=0;
                    f(i,n-1)
                    {
                        if(v[i]>v[i+1])
                        {
                            f=1;
                            cout<<"NO"<<endl;
                            break;
                        }
                    }
                    if(!f)
                        cout<<"YES"<<endl;
                }
                return 0;
}