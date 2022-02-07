#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,rx,ry,dx,dy;
        cin>>n>>m>>rx>>ry>>dx>>dy;
        int r=1,c=1;
        int time=0;
        while(rx!=dx && ry!=dy){
            if (rx+r > n || rx+r < 1) r=-r;
            if (ry+c > m || ry+c < 1) c=-c;

            rx+=r; ry+=c;
            time++;
            //cout<<time<<"\n";
        }
        cout<<time<<"\n";
    }
}
