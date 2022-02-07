
#include<bits/stdc++.h>
using namespace std;

int main() {
  int t,n;

  cin>>t;
  for (int i=0;i<t;i++){
    cin>>n;
    multiset<int> s;
    for (int j=0;j<n;j++){
      int x;
      cin>>x;
      s.insert(x);
    }
    int times = 0;
    bool comp = false;
    for (auto it =  next(s.begin()); it!=s.end();it++){
       for (auto it1 =  s.begin(); it1!=it; it1++){
        // cout<<*it <<" "<< *it1<<"\n";
         //cout<<"sios"<<endl;
         if (*it != *it1){
           //cout<<"bef mod"<<"\n";
           int mod  = *it % *it1;
           //cout<<mod<<endl;
           if (s.find(mod)== s.end()){
             //cout<<"mod"<<"\n";
             cout<< *it<<" "<< *it1<<"\n";
             times++;
             if (times == (n/2)) comp = true; break;
           }
         }
      }

      if (comp) break;
    }
    s.clear();
  }
}
