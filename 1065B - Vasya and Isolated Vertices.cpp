
#include <bits/stdc++.h>
using namespace std;
#define ll  long long int


int main()
{
    ll i,j,k;
    ll n,m;
    ll mn,mx;
    cin>>n>>m;
    mn=max((ll)0,n-m*2);
    mx=0;
    for(i=1;i<=n;i++)
    {
        k=(n-i)*(n-i-1);
        k /= 2;
        if(k>=m)
        {
            mx=max(mx,i);
        }
    }
    cout<<mn<<" "<<mx;

}
