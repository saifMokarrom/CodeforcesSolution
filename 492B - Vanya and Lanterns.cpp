#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,l;
    double d=0,rad=0;
    cin>>n>>l;
    int ara[n];
    for (int i=0;i<n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for (int i=0;i<n-1;i++){
        if (abs(ara[i]-ara[i+1])>d) d=abs(ara[i]-ara[i+1]);
    }
    rad = max(double(ara[0]-0),max(double(l-ara[n-1]),(d/2)));
    cout<<setprecision(10)<<fixed;
    cout<<rad<<"\n";
}
