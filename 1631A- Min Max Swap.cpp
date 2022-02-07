#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ara1[n], ara2[n];
        for (int i=0;i<n;i++){
            cin>>ara1[i];
        }
        for (int i=0;i<n;i++){
            cin>>ara2[i];
        }

        for (int i=0;i<n;i++){

            if (ara2[i]>ara1[i]){
                swap(ara2[i],ara1[i]);
            }

        }
        int ans =*max_element(ara1,ara1+n)* (*max_element(ara2,ara2+n));


        cout<<ans<<"\n";

    }
}

