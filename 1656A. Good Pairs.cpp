
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> vec;
        for (ll i=0;i<n;i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        if (n == 1) cout<<1<<" "<<1<<"\n";
        else{
            ll j = max_element(vec.begin(),vec.end()) - vec.begin();
            ll i = min_element(vec.begin(),vec.end()) - vec.begin();
            cout<<i+1<<" "<<j+1<<"\n";
        }

    }
}
