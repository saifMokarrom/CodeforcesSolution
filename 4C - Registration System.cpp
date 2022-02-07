#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    stringstream ss;
    map<string,int> m;
    cin>>t;
    for (int i=0;i<t;i++){
        string s;
        cin>>s;
        m[s]++;
        if(m[s]==1)
            cout<<"OK"<<"\n";
        else{
            stringstream ss;
            ss<<m[s]-1;
            string temp;
            ss>>temp;
            cout<<s+temp<<"\n";
        }
    }
}
