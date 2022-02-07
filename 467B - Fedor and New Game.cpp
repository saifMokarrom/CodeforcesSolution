
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    int ans = 0;
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m + 1; i++){
        int x;
        cin >>x;
        vec.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
            if (((vec[i] >> j) & 1) != ((vec[m] >> j) & 1))
                t++;
        if(t <= k)
            ans++;
    }

    cout << ans << endl;
}
