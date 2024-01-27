#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    vector<pair<int, int>> v;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long n, ans = 0;
        cin >> n;

        if (n <= 2)
        {
            cout << n << endl;
            continue;
        }

        for(long long i=1;i<n/2;i++){
                // if(i==1){
                //     ans++;
                // }
                int c1=(n-i);
                int c2=i;
                if(c1<c2)
                swap(c1,c2);

                // cout<<"combination : "<<c1<<","<<c2<<endl;

                if((c1)%c2==0){
                // cout<<"this comb passes : "<<endl;
                ans++;
                }

                // cout<<"Current ans : "<<ans<<endl;
        }

        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                If divisors are equal, print only one
                if (n / i == i)
                    cout << " " << i;

                else // Otherwise print both
                    cout << " " << i << " " << n / i;
            
            }
        }

        // cout<<"FINAL ANS : "<<endl;
        // cout<<ans<<endl;
        v.push_back({n, ans});
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << "for value : " << v[i].first << " ops are : " << v[i].second << endl;
    // }
    return 0;
}