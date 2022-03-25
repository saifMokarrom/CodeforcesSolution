#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        ll count=0;
        for (int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
            if (x == 1) count++;
        }
        bool ans = true;
        if (count == v.size()) cout<<"YES"<<"\n";
        else if (count == 0) cout<<"YES"<<"\n";
        else {
            sort(v.begin(),v.end());
            for (int i=0;i<n-1;i++){
                if (abs(v[i]-v[i+1]) == 1){
                    ans = false;
                    cout<<"NO"<<"\n";
                    break;
                }
            }
            if (ans) cout<<"YES"<<"\n";
        }
    }
}
