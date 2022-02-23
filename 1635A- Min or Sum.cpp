#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
         int el;
        int ans = 0;
        cin>>n;
        int ara1[n];
        for (int i=0;i<n;i++){
            cin>>el;
            ans = ans | el;
        }
        cout<<ans<<"\n";
    }
}
