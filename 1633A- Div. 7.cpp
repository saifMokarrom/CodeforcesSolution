
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if (n%7==0) cout<<n<<"\n";
        else{

        int rem = n%7;
        int toadd = 7-rem;

        if (n%10 <= 3)
            cout<<n+toadd<<"\n";

        else if (n%10 >= 7)
            cout<<n-rem<<"\n";


        else{
            if (n%10 >= rem)
                cout<<n-rem<<"\n";

            else
                cout<<n+toadd<<"\n";

        }
        }
    }
}
