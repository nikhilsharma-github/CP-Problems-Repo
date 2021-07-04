#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long query;
    cin >> query;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= query; i++)
    {
        bool flag = false;
        int temp = 0;

        // deb(i);
        long long q;
        cin >> q;
        // deb(q);
       int sign = 1, nsign = 1;


   sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            // deb(a[i]);

            if (a[i] == q)
            {
                cout << "0" << endl;
                temp = 1;
                break;
            }
            if (q - a[i] >= 0)
                nsign = 1;
            else
                nsign = -1;

            sign = nsign * sign;
            // deb(sign);
        }
        if (sign == -1 && temp == 0)
            cout << "NEGATIVE" << endl;
        else if (sign == 1 && temp == 0)
            cout << "POSITIVE" << endl;
    }

    return 0;
}