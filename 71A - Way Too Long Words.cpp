#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int n,count=0;
    string s;
    string temp;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>s;
        if (s.size()<=10){
            cout<<s<<endl;
        }
        else{
            for (int i=1;i<s.size()-1;i++){
                count++;
            }
            cout<<s[0]<<count<<s[s.size()-1]<<endl;
        }
        count=0;
 
    }
    return 0;
}