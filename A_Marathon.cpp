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
        long long a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;
        if(b>a)
        ans++;
        if(c>a)
        ans++;
        if(d>a)
        ans++;

        cout<<ans<<endl;
    }
    return 0;
}