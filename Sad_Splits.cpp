#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        long long n, n1;
        cin >> n;
        n1 = n;

        bool flag = false;
        int power = 0;
        while (n1 > 0)
        {
            power = power + 1;
            n1 = n1 / 10;
        }
        // cout<<"total power for number "<<n<<" "<<power<<endl;

        long long firstTen = 10;
        // long long lastTen = pow(10, power);
        for (int i = 1; i < power; i++)
        {
            // cout<<"10 Power Use for first value : "<<firstTen<<endl;
            // cout<<"10 Power Use for last value : "<<lastTen<<endl;
            long long firstPart = n / firstTen;
            long long lastPart = n % firstTen;

            // cout << "\nFirstpart :" << firstPart << endl;
            // cout<<"\nLastPart :"<<lastPart<<endl;

            if ((firstPart + lastPart) % 2 == 0)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
            firstTen *= 10;
            // lastTen=lastTen/10;
        }

        if(flag==false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}