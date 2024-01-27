#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;

    // cout<<"Testcase : "<<test+1<<endl;
    long long n;
    cin >> n;
    vector<int> v;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
        if (i % 2 == 0)
            even = even + v[i];
        else
            odd = odd + v[i];
    }
    // for(int i=0;i<n;i++){
    // }

    if (even < odd)
        cout << odd << endl;
    else
        cout << even << endl;

    return 0;
}