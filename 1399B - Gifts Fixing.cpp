#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,*min_a,*min_b;
    long long int count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int ara_a[n];
        int ara_b[n];
        for(int j=0;j<n;j++){
            cin>>ara_a[j];
        }
        for(int j=0;j<n;j++){
            cin>>ara_b[j];
        }
        min_a = min_element(ara_a+0,ara_a+n);
        min_b = min_element(ara_b+0,ara_b+n);
        for(int j=0;j<n;j++){
            ara_a[j]-*min_a > ara_b[j]-*min_b? count+=ara_a[j]-*min_a:count+=ara_b[j]-*min_b;
        }
        cout<<count<<endl;
        count=0;
    }
}
