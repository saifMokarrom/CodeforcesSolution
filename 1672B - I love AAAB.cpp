#include<bits/stdc++.h>
using  namespace  std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool is = 0;
        int ac=0,bc=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='A')ac++;
           else bc++;
           if(bc>ac)
           {
               is=1;
               break;
           }
        }
        if(s[0]=='B' || is==1 || s[s.size()-1]!='B') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
