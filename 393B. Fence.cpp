#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){

    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for (int i=0;i<n;i++){
        ll x;cin>>x;v.push_back(x);
        if (i!=0) v[i] = v[i-1]+x;
    }
    vector<ll> res(n,0);
    res[k-1] = v[k-1];
    for (int i=k;i<n;i++){
        res[i] = v[i] - v[i-k];
    }

    ll ans = min_element(res.begin()+(k-1),res.end()) - res.begin();
    cout<<ans+1-(k-1)<<"\n";
}
