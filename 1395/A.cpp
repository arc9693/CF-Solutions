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
                    ll a,b,c,d;
                    cin>>a>>b>>c>>d;
                    
                    ll mi=min(min(a,b),c);
                //    a-=mi;
                  //  b-=mi;
                   // c-=mi;
                    //d+=(3*mi);
                    int odd=0;
                    if(a%2) odd++;
                    if(b%2) odd++;
                    if(c%2) odd++;
                    if(odd==0||(odd==3&&mi>=1)||(odd==2&&d%2&&mi>=1)||(odd==1&&d%2==0))
                    	cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
                return 0;
}