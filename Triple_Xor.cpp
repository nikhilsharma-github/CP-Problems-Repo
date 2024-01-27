#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

// void print(int n)
// {
//     cout << n << endl;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long n, k;
        cin >> n >> k;
        long long ma = pow(2, n) - 1;
        ma = ma * (ma - 1);
        cout << ma << endl;
    }
    return 0;
}