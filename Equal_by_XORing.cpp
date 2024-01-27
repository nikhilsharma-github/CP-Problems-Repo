#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void sol(long long x, long long y, long long n)
{

    // cout << "For x: " << x << " y : " << y << " n: " << n << endl;

    // long long temp=x;
    // string bx="",by="";
    // while(temp){
    //     bx=to_string((temp%2))+bx;
    //     temp=temp/2;
    // }
    // temp=y;
    // while(temp){
    //     by=to_string((temp%2))+by;
    //     temp=temp/2;
    // }

    // long long lsb= (int)(log2(n));
    // lsb=lsb<<1;

    // cout<<"BX : "<<bx<<endl;
    // cout<<"BY : "<<by<<endl;
    long long xorval = x ^ y;
    // cout<<"X XOR Y : "<<(x^y)<<endl;
    if (x == y)
    {
        cout << "0" << endl;
    }
    else if (xorval < n)
    {
        cout << "1" << endl;
    }
    else
    {
        // if (n & (n - 1) != 0)
        // {
        //     cout << "2" << endl;
        // }
        // else
        // {
        //     cout << "-1" << endl;
        // }

        int totalbitsxor = int(log2(xorval)) + 1;
        int totalbitsn = int(log2(n)) + 1;

        if (totalbitsn != totalbitsxor)
        {
            cout << "-1" << endl;
        }
        else
        {
            if (ceil(log2(n)) != floor(log2(n)))
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
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
        // cout << "Testcase : " << test + 1 << endl;
        long long x, y, n;
        cin >> x >> y >> n;

        sol(x, y, n);
    }
    return 0;
}