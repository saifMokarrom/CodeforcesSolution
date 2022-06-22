#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> vec;
        vector<ll> ans;
        set<ll> s;
        for (ll i=0;i<n;i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        for (ll i=1;i<=n;i++) s.insert(i);


        if (n==1) cout<<"-1"<<"\n";
        else{
            for (ll i=0;i<n;i++){
                ll x = *s.begin();
                if (x != vec[i]){
                    ans.push_back(x);
                    s.erase(x);
                }
                else{
                    if (s.size() == 1) {
                        ans.push_back(x);
                        s.erase(x);
                        swap(ans[i],ans[i-1]);
                    }
                    else{
                        x+=1;
                        ans.push_back(x);
                        s.erase(x);

                    }
                }
            }
            for (auto it: ans) cout<<it<<" ";
            cout<<"\n";
        }

    }

}
