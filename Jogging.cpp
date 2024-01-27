#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

#define MOD 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;
        int n, x;
      unsigned  long long totalCal = 0;
        cin >> n >> x;
        cout <<" N: "<< n << "  X: " << x << endl;
        // for (long long i = 1; i <= n; i++)
        // {
        //     // cout << "for k : " << i << endl;
        //     if (i == 1)
        //     {
        //         totalCal = x % MOD;
        //     }
        //     else
        //     {
        //         totalCal = (totalCal + totalCal) % MOD;
        //     }

        //     // cout << "Current totalCal : " << totalCal << endl;
        // }
        int two = 2;
            long long power=(pow(two,n - 1));
            power=power%MOD;
            cout<<" 2 raised to power "<<n-1<< " is : "<<power<<endl;
            totalCal = (x * power)%MOD;
            cout<<"Final product : "<<totalCal<<endl;
            cout << totalCal << endl;
        // }
    }
    return 0;
}