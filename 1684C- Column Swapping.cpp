#include<bits/stdc++.h>
using  namespace  std;

typedef long long int ll;




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v[n],v1[n];
        int ans1=1,ans2=1;
        int ind=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;
                v[i].push_back(x);
            }
            v1[i]=v[i];
            sort(v1[i].begin(),v1[i].end());
            if(v1[i]!=v[i])
            {
                ind=i;
            }
        }
        if(ind==-1)cout<<"1 1"<<endl;
        else{
            for(int i=0;i<m;i++)
            {
                if(v1[ind][i]!=v[ind][i])
                {
                    ans1=i;
                    break;
                }
            }
            for(int i=m-1;i>=0;i--)
            {
                if(v1[ind][i]!=v[ind][i])
                {
                    ans2=i;
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                swap(v[i][ans1],v[i][ans2]);
            }
            int ans = -1;
            for(int i=0;i<n;i++)
            {
                if(v[i]!=v1[i])
                {
                    ans=1;
                    break;
                }
            }
            if(ans==1)cout<<-1<<endl;
            else
            {
                cout<<ans1+1<<" "<<ans2+1<<endl;
            }
        }

    }
}
