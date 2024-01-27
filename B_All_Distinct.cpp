#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

long long allDistinct(vector<int> ip, int n)
{
    long long ans = 0;
    // map<int, int> m;
    // for (int v : ip)
    // {
    //     m[v]++;
    // }
    // vector<int> freq;
    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     freq.push_back(it->second);
    // }
    // sort(freq.begin(), freq.end());

    // if(freq.size()%2!=0)
    // ans++;

    // for(int i=0;i<=freq.size()-1){

    // }

    // sort(ip.begin(), ip.end());
    // for(int r:ip)
    // cout<<r<<" ";
    // cout<<endl;

    // for(int i=1;i<n;){
    //     if(ip[i]==ip[i-1]){
    //             ip[i]=-1;
    //             ip[i-1]=-1;
    //         i=i+2;
    //     }
    //     else{
    //             i++;
    //     }

    // }

    // for(int k:ip)
    // cout<<k<<" ";
    // cout<<endl;

    // return ans;

    set<int> s;
    for(int val:ip)
    s.insert(val);

    ans=s.size();

    if((ip.size()-s.size())%2!=0)
    ans--;

    // cout<<ans<<endl;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        vector<int> ip;
        long long n, t;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ip.push_back(t);
        }

        cout << allDistinct(ip, n) << endl;
    }
    return 0;
}