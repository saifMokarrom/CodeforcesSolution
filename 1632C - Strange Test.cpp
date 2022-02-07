#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      if ((a|b) == b) cout<<1<<"\n";
      else{
        int res= b-a;
        for (int i=1;i<(b-a);i++){
          if(((a+i)|b) == b){ res=min(i+1,res); break; }   }

        for (int i=1;i<(b-a);i++){
          if ((a | (b+i)) == b+i){ res=min(i+1,res);  break;}
        }
        cout<<res<<"\n"; }
    }
    return 0;
}
