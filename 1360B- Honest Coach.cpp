#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ara[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        sort(ara,ara+n);
        int diff = INT_MAX;
        for(int i=1; i<n; i++){
            if (ara[i] - ara[i-1] < diff){
                diff  = ara[i] - ara[i-1];
            }
        }
        cout<<diff<<endl;
    }

}
