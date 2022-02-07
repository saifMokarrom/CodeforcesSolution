
#include <bits/stdc++.h>
using namespace std;
void asquare()
{
    string s;
    cin>>s;
    long long n=s.length();
    string s1="";
    for(int i=n-1;i>0;i--)
    {
        int a=s[i]-'0';
        int b=s[i-1]-'0';
        if(a+b>9)
        {
            for(int j=0;j<i-1;j++)cout<<s[j];
            cout<<a+b;
            for(int j=s1.length()-1;j>=0;j--)cout<<s1[j];
            cout<<"\n";
            return;
        }
        else s1+=s[i];
    }
    if(n==2)
    {
        int a=s[0]-'0';
        int b=s[1]-'0';
        cout<<a+b<<"\n";
    }
    else{
        int a=s[0]-'0';
        int b=s[1]-'0';
        cout<<a+b<<s.substr(2)<<"\n";
    }
}
int main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    // asquare();
    return 0;
}
