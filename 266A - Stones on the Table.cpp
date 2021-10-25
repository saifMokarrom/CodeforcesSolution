#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,min=0;
    cin>>n;
    char s[n];
    cin>>s;
    for (int i=0;i<n-1;i++){
        if (s[i]==s[i+1]){
            min++;
        }
    }
    cout<<min<<endl;
}