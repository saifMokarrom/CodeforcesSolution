

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        double ax = pow(x,2);
        double ay = pow(y,2);
        double total = ax+ay;
        double root = sqrt(total);
        if (x==0 && y == 0) cout<<0<<"\n";
        else if (x == 0 && y > 0) cout<<1<<"\n";
        else if (x > 0 && y == 0) cout<<1<<"\n";

        else if (root == int(root)) {cout<<1<<"\n";}
        else cout<<2<<"\n";

    }
}
