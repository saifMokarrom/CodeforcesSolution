
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ans = n;
        int can = 0;
        for (int i=1; i*i<n; i++){
            if (n%i == 0){
                if (n/i > k) continue;
                else {
                    cout<<i<<"\n";
                    can=1;
                    break;
                }

            }
        }
        if (can == 0) cout<<ans<<"\n";

    }
}
