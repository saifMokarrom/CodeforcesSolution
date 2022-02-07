

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        char ara[n][m];
        vector <int> row(n,0);
        vector <int>col(m,0);
        int bl=0;

        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                    char c;
                    cin>>c;
                    ara[i][j] = c;
                    if (c == 'B'){
                        row[i] = 1;
                        col[j] = 1;
                        bl++;
                    }

            }
        }



        if (bl==0) cout<<-1<<"\n";
        else if (ara[r-1][c-1]=='B') cout<<0<<"\n";
        else if(row[r-1]==1 || col[c-1]==1 ) cout<<1<<"\n";
        else cout<<2<<"\n";
    }
}
