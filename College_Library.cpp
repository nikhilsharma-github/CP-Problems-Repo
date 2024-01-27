#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        // cout<<"Testcase : "<<test+1<<endl;
        long long n,t,currentSum=0;
        vector<int> v;
        cin >> n;
        for(int i=0;i<n-1;i++)
        {
            cin>>t;
            v.push_back(t);
            currentSum+=t;
        }

        long long totalSum=(n*(n+1))/2;
        // cout<<currentSum<<endl;
        // cout<<totalSum<<endl;
        cout<<totalSum-currentSum<<endl;

    
    return 0;
}