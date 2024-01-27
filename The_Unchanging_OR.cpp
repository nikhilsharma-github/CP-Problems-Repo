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
        long long n;
        cin >> n;
        // cout<<n<<endl;
        // int orCal = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //     orCal = orCal | (i);
        // }

        // int k = (int)log2(n);
        // int p= (int)pow(2, k);

        int power = 1, p = 0;
        while (power <=n){
            power *= 2;
            p++;
        }

        // cout<<"Power : "<<power<<endl;

        // cout << "OR till " << n << " is : " << orCal << endl;
        // cout << "min pow of 2 : " << p << " val of 2 : " << pow(2, p) << endl;
        // cout<<"Ans : "<<endl;
        cout<<n-p<<endl;
    }
    return 0;
}