
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
                    ll n,k;
                    cin>>n>>k;
                    if(n%2) // can make odd values
                    {
                        if(k%2&&k<=n)
                            cout<<0<<endl;
                        else
                        {
                            if(k>n)
                            cout<<abs(k-n)<<endl;
                            else cout<<1<<endl;
                        }
                    }
                    else // can make even values
                    {

                        if(k%2==0&&k<=n)
                            cout<<0<<endl;
                        else
                        {
                            
                            if(k>n)
                                cout<<abs(k-n)<<endl;
                            else cout<<n-1<<endl;
                        }
                    }
                }
                return 0;
}