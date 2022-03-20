

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,m;
        string s;
        cin>>n>>m>>s;
        vector<int> wro(n,0);
        for (int i=0;i<m;i++){
            int pow;
            cin>>pow;
            wro[pow-1]++;
        }
        vector<int> ssum(n,0);
        ssum[n-1] = wro[n-1];
        for (int i=n-2; i>=0; --i){
            ssum[i]= ssum[i+1] + wro[i];
        }
        vector<int> all(26,0);
        for (int i=0;i<n;i++){
            all[s[i] - 'a'] = all[s[i] - 'a'] + ssum[i] + 1;
        }

        for (int i=0;i<26;i++){
            cout<<all[i]<<" ";
        }
    }
}
