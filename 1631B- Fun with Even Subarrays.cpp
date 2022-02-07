#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ara[n];
        for (int i=0;i<n;i++){
            cin>>ara[i];
        }

        int step=0;
        int j = n-1;
        while(j>0){
            if (ara[j-1] == ara[j]) j--;
            else{
                step++;
                int ans = n-j;
                j = n - (ans*2);
                if (j > 0 ){
                    ara[j] = ara[n-1];
                }
                else break;
            }
        }

        cout<<step<<"\n";
    }
}

