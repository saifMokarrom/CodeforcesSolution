#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100],s1[100];
    int count=0,n;
    cin>>s;
    n=strlen(s);
    sort(s,s+n);
    for (int i=0;i<n;i++){
        if (s[i]!=s[i+1]){
            count++;
        }
    }
    if (count&1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}