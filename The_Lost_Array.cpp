#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void sol(vector<long long> ip){
    vector<long long> ans;

    for(int i=1;i<ip.size();i++){
        ans.push_back(ip[i-1]^ip[i]);
    }

    for(long long k:ans)
    cout<<k<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long n,t;
        cin >> n;
        vector<long long > ip;
        for(int i=0;i<n+1;i++){
            cin>>t;
            ip.push_back(t);
        }

        sol(ip);

    }
    return 0;
}