#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define el '\n'
using namespace std;

void rev(vector<ll>&v,int i,int j){
    while(i<=j){
        swap(v[i++],v[j--]);
    }
}

void solve(){
    ll n,i,pos=0;

    bool flag = true;
    cin>>n;
    vector<ll>ara(n);
    for(int i=0;i<n;i++)cin>>ara[i];
    for(int i=0;i<n;i++){
        if(ara[i]!=i+1&&flag){
            for(pos=i+1;pos<n;pos++){
                if(ara[pos]==i+1){
                    break;
                }
            }
            rev(ara,i,pos);
            cout<<ara[i]<<" ";
            flag=false;

        }else{
            cout<<ara[i]<<" ";
        }
    }
    cout<<endl;
}
int main(){

   int t;
   cin>>t;
   while(t--){

    solve();
   }

}
