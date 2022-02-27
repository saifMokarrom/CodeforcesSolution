
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    long long s,a,b,c;
    unsigned long long res,buy,divi;

    cin>>t;
    while(t--)
    {
        divi = 0;
        buy = res = 0;
        cin>>s>>a>>b>>c;
        buy = s/c;
        divi = buy/a;
        res = (divi*a) + (divi*b);
        res +=(buy%a);

        cout<<res<<endl;
    }
}
