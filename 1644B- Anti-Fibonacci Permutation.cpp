
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int sec= n-1;
        for (int i=0;i<n-1;i++){
            cout<<n<<" "<<sec<<" ";
            for(int j=n-1;j>=1;j--){
                if (j!=sec) cout<<j<<" ";
            }
            sec--;
            cout<<"\n";
        }

        cout<<n-1<<" "<<n<<" ";
        for (int i=n-2;i>=1;i--){
            cout<<i<<" ";
        }
    }
}




















