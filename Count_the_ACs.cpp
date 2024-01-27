#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(long long &n)
{
    // cout << "Given value : " << n << endl;
    // cout << endl;
    long long hundredcross = n / 100;
    long long rem = n % 100;
    // cout << "Hunderedcross: " << hundredcross << " rem: " << rem << endl;
    // cout << "FINAL ANS: ";
    if (n > 10 && n <= 99)
    {
        cout << "-1" << endl;
        // cout << endl;
    }
    else if (hundredcross + rem <= 10)
    {
        cout << hundredcross + rem << endl;
        // cout << endl;
    }
    else
    {
        cout << "-1" << endl;
        // cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;

        // for(int i=0;i<1000;i++)
        // cout<<i<<endl;
        solve(n);
    }
    return 0;
}