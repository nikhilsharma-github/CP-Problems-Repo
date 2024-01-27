#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int solve(int n)
{
    int odd = 0, even = 0, i = 0;
    for (i = n + 1; i <= 100000000; i++)
    {
        int k = i;
        while (k)
        {
            (k % 2 == 0) ? even++ : odd++;
            k = k / 2;
        }
        if (odd == even)
            return i;
    }

    return i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;
        int n;
        cin >> n;
        int v = solve(n);
        if (v == 1)
            cout << "Perfect" << endl;
        else
            cout << "not perfect" << endl;
    }
    return 0;
}