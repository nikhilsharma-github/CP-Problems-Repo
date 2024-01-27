#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(vector<int> v)
{
    int n = v.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string b1 = bitset<6>(v[i]).to_string();
            string b2 = bitset<6>(v[j]).to_string();
            int v1 = v[i];
            int v2 = v[j];
            cout << "V1 : " << v1 << " V2 : " << v2 << endl;
            cout << b1 << endl;
            cout << b2 << endl;

            int k = v1 ^ v2;
            int r = v1 & v2;
            cout << "Their xor : " << k << endl;
            cout << "Their And : " << r << endl;

            if (k < r)
            {
                cout << "Addition to ans " << endl;
                ans++;
            }
        }
    }
    cout << "\nFinal ans : " << ans << endl;
    // cout<<ans<<endl;
}

void solve2(vector<int> v)
{
    int ans=0;
    unordered_map<int, int> mp;
    for(int v:v){
        //  string b1 = bitset<32>(v).to_string();
        //  for(int i=0;i<b1.size();i++){
          
        //   if(b1[i]=='1'){
        //       mp[i]++;
        //       break;
        //   }
    //   }
        int s;
        for(int j=0;j<=31;j++){
            int r=(1<<j);
            if(r&v)
            s=j;
        }

        mp[s]++;
       
    }


    for(auto it:mp){
        int freq=it.second;
        ans=ans+(freq*(freq-1))/2;
    }
    cout<<ans<<endl;
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }

        // solve(v);
        solve2(v);
    }
    return 0;
}