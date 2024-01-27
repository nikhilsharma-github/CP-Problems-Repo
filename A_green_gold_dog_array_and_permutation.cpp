#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;
        vector<pair<int,int>> r;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            r.push_back({t,i});
        }

        sort(r.begin(),r.end());
        int k=r.size();
        for(int i=0;i<n;i++){
            r[i].first=k;
            k--;
        }
        int ans[n];
        for(int i=0;i<n;i++){
            ans[r[i].second]=r[i].first;
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;



    }
    return 0;
}