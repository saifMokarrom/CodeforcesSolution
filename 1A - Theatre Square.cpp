#include<bits/stdc++.h>
using namespace std;
int main(){
 
    long long int n,m,a,temp1,temp2;
    cin>>n>>m>>a;
    if(n%a==0)
        temp1 = n/a;
    else{
        temp1 = (n/a)+1;
    }
    if (m%a==0){
        temp2 = m/a;
    }
    else{
        temp2 = (m/a)+1;
    }
    cout<<temp1*temp2<<endl;
}