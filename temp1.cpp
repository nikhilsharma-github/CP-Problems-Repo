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
        vector<int> v;
        long long n;
        cin >> n;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            v.push_back(t);
        }

        int k,ans=0;
        cin>>k;
        int compDiff=INT_MAX;
        for(int r:v){
            if(abs(r-k)<compDiff){
            ans=r;
            compDiff=abs(r-k);
            }
        }

        cout<<ans<<endl;


    }
    return 0;
}