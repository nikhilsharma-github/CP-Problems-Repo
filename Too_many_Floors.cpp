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
        long long x,y;
        cin >> x>>y;

        long long xfloor=(x/10);
        if(x%10==0)
        xfloor--;

        long long yfloor=(y/10);
        if(y%10==0)
        yfloor--;

        cout<<(abs)(yfloor-xfloor)<<endl;
        


    }
    return 0;
}