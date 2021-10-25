#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100],count=0;
    cin>>s;
    for (int i=1;i<strlen(s);i++){
        if (s[i]>=97 && s[i]<=122){
            count++;
        }
    }
    if (count>=1){
        cout<<s<<endl;
    }
    else{
 
        for (int i=0;i<strlen(s);i++){
            if (s[i]>= 65 && s[i]<=90){
                s[i]=s[i]+32;
            }
            else{
                s[i]=s[0]-32;
            }
        }
        cout<<s<<endl;
    }
 
}