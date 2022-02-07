
#include <bits/stdc++.h>
using namespace std;




int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int x,ld;
    cin>>x;
    int count=0;
    while (x>0){
      ld=x%10;
      x/=10;
      count++;
    }
    int ans=(ld-1)*10;
    if (count==1) ans+=1;
    else if(count==2) ans+=3;
    else if (count==3) ans+=6;
    else if (count==4) ans+=10;

    cout<<ans<<"\n";
    }
  }
