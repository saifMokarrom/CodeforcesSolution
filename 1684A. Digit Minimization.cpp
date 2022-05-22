
#include<bits/stdc++.h>
using  namespace  std;
typedef long long ll;


int main()
{
    ll t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int sm = n[0] -'0';
        if (n.size() == 2) cout<<n[1]<<"\n";
        else{
        for (ll i=1;i<n.size();i++){
            if (n[i] - '0' < sm){
                sm = n[i] - '0';
            }
        }
        cout<<sm<<"\n";
        }
    }
}
