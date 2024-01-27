#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(vector<long long> &v)
{
    unordered_map<long long,long long> mp;
    long long maxfreq=1;
    for(auto k:v){
        mp[k]++;
        if(mp[k]>=maxfreq)
        maxfreq=mp[k];
    }

    // cout<<maxfreq<<endl;
    cout<<v.size()-maxfreq<<endl;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        long long n, t;
        cin >> n;

        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }

        solve(v);
    }
    return 0;
}