

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    ll t,n,b,x,y;
    cin>>t;
    while(t--){
        cin>>n>>b>>x>>y;
        vector<ll> v(n+1);
        ll sum=0;
        for (int i=1;i<=n;i++){
            if (v[i-1]+x <= b) v[i] = v[i-1]+x;
            else v[i] = v[i-1]-y;
        }
        for (int i=0;i<v.size();i++){
            sum+=v[i];
        }
        cout<<sum<<"\n";
    }
}
