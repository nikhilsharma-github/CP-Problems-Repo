#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(vector<long long> &v)
{
    long long n = v.size(), count = 0;
    vector<long long> pregcd(n);
    vector<long long> postgcd(n);

    pregcd[0] = v[0];
    postgcd[n - 1] = v[n - 1];

    for (long long i = 1; i < n; i++)
    {
        long long pregcdval = __gcd(v[i], pregcd[i - 1]);
        pregcd[i] = pregcdval;
    }
    for (long long i = n - 2; i >= 0; i--)
    {
        long long postgcdval = __gcd(v[i], postgcd[i + 1]);
        postgcd[i] = postgcdval;
    }

    for (long long i = 0; i < n; i++)
    {
        long long check = 0;
        if (i == 0)
        {
            check = postgcd[i + 1];
        }
        else if (i == n - 1)
        {
            check = pregcd[i - 1];
        }
        else
        {
            check = __gcd(pregcd[i - 1], postgcd[i + 1]);
        }
        if (check > 1)
            count++;

    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        long long n, t = 0;
        cin >> n;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }

        solve(v);
    }
    return 0;
}