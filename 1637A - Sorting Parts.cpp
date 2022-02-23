#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int> one;
        vector<int> two;

        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            one.push_back(x);
            two.push_back(x);
        }

        sort(one.begin(),one.end());
        if (one == two) cout<<"NO"<<"\n";
        else if (two[0] >= two[n-1]) cout<<"YES"<<"\n";
        else cout<<"YES"<<"\n";

    }

}
