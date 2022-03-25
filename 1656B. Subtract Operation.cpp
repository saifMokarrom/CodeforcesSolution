
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v;
        for (int i=0;i<n;i++) {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        bool ans = false;
        sort(v.begin(),v.end());
        for (ll i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<"\n";
        for (int i=0;i<n;i++){
            ll fin = v[i] + k;
            if (binary_search(v.begin()+i+1,v.end(),fin)){
                ans  = true;
                cout<<"YES"<<"\n";
                cout<<v[i]<<" "<<k<<"\n";
                break;
            }
        }
        if (!ans) cout<<"NO"<<"\n";
    }
}
