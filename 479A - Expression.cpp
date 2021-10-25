#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int x,y,z,ans=0;
    cin>>x>>y>>z;
    for (int i=0;i<4;i++){
        if (i==0){
            ans = max(x*y*z,max(x*(y*z),(x*y)*z));
        }
        else if (i==1){
            if (max(x*y+z,max(x*(y+z),(x*y)+z)) > ans){
                ans  = max(x*y+z,max(x*(y+z),(x*y)+z));
            }
        }
        else if (i==2){
            if (max(x+y*z,max(x+(y*z),(x+y)*z)) > ans){
                ans  = max(x+y*z,max(x+(y*z),(x+y)*z));
            }
        }
        else if (i==3){
            if (max(x+y+z,max(x+(y+z),(x+y)+z)) > ans){
                ans  = max(x+y+z,max(x+(y+z),(x+y)+z));
            }
        }
    }
    cout<<ans<<endl;
}