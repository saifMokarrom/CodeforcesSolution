#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n,c1=0,c2=0,c3=0,c4=0,count=0;
    cin>>n;
    int ara[n];
    for (int i=0;i<n;i++){
        cin>>ara[i];
        if (ara[i]==1) c1++;
        else if (ara[i]==2) c2++;
        else if (ara[i]==3) c3++;
        else c4++;
    }
    count+=c4;
 
 
    if (c1>=c3){
        count+=c3;
        c1-=c3;
        c3-=c3;
    }
    else{
        count+=c1;
        c3-=c1;
        c1-=c1;
    }
    count+=c3;
 
 
 
    if (c2%2==0){
        count+=(c2/2);
        c2=0;
    }
    else{
        count+=(c2/2);
        if (c1==1){
            count+=1;
            c1=0;
            c2=0;
        }
        else if(c1>=2){
            count+=1;
            c1-=2;
            c2=0;
        }
        else if (c1==0) count+=1;
    }
 
    if (c1%4==0) count+=(c1/4);
    else count=count+(c1/4)+1;
 
    cout<<count<<endl;
 
}