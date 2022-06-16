#include<bits/stdc++.h>
using namespace std;
#define faster      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        vector<ll> v;
        for (ll i=0;i<n;i++){
            ll x; cin>>x;
            v.push_back(x);
        }

        ll l=0,hi=h;

        ll a=0;
        while(l<=hi){
            ll m=(l+hi)/2;
            ll s=0;
            for (ll i=1;i<n;i++){
                s += min(m,v[i]-v[i-1]);
            }
            s+=m;
            //cout<<s<<"\n";
            if (s> h) hi=m-1;
            else if (s< h) l=m+1;
            else{ cout<<m<<"\n"; a=1; break;}

        }
        if (l>=hi && a==0) cout<<l<<"\n";
    }
}
