#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int r=0,b=0,g=0;
        int high = 0;
        for (int i=0;i<s.size();i++){
            if (s[i] == 'r') r++;
            if (s[i] == 'g') g++;
            if(s[i] == 'b') b++;
            if(s[i] == 'R'){
                if (r>0) high++;
                else break;
            }
            if(s[i] == 'G'){
                if (g>0) high++;
                else break;
            }
            if(s[i] == 'B'){
                if (b>0) high++;
                else break;
            }

        }
        if (high==3) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }
}
