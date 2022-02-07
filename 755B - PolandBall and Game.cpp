#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int n,m,count=0;
    cin>>n>>m;
    string s;
    vector <string> v1,v2;
    vector <string>::iterator it;
    for (int i=0;i<n;i++){
        cin>>s;
        v1.push_back(s);
    }
    for (int i=0;i<m;i++){
        cin>>s;
        v2.push_back(s);
    }
    if (v1.size()==v2.size()) {
        for (int i=0;i<v1.size();i++){
            it = find(v2.begin(),v2.end(),v1[i]);
            if (it!=v2.end())
                count++;
        }
        if (count%2==1){
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
    }
 
    else if (v1.size()>v2.size())
        cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}