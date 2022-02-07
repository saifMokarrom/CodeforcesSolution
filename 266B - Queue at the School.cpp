#include<iostream>

#include <cstring>

using namespace std;
int main(){

    int n,t;
    cin>>n;cin>>t;
    char str[n];
    cin>>str;
    for(int x=0;x<t;x++){
        for(int i = 0;i < n; i++){
            if(str[i] == 'G' && str[i-1]=='B'){

                str[i]='B';
                str[i-1]='G';
                i++;
            }
        }
    }
    cout<<str<<endl;

}
