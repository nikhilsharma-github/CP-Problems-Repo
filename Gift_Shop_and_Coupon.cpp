
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
        vector<long long> v;
        // multiset<long long> v;
        long long n, k, t, totalPrice = 0, ans = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            totalPrice += t;
            v.push_back(t);
            // v.insert(t);
        }

        //  cout<<"old set is : "<<endl;
        //          for(auto it:v){
        //         cout<<it<<endl;
        //     }

        sort(v.begin(), v.end());
        // auto it = v.begin();
        // int d = round((*it) / 2.0);
        // cout<<"first element "<<d<<endl;

        // if (totalPrice <= k)
        // {
        //     cout << n << endl;
        //     continue;
        // }
        // else if (k < d)
        // {
        //     cout << "0" << endl;
        //     continue;
        // }
        // else
        // {
        //     auto it = v.rbegin();
        //     int d = round((*it) / 2.0);
        //     v.insert(d);

        //     //  cout<<"new set is : "<<endl;
        //     //      for(auto it:v){
        //     //     cout<<it<<endl;
        //     // }

        //     long long count = 0, sum = 0;
        //     for (auto it : v)
        //     {
        //         count++;
        //         sum = sum + it;

        //         if (sum > k)
        //         {
        //             break;
        //         }
        //     }
        //     // cout<<count<<endl;
        //     if (sum > k)
        //         count = count - 1;

        //     ans = count;
        // }
        // else
        // {
        //     ans = n;
        //     for (int i = n - 1; i >= 0; i--)
        //     {
        //         cout << "current total Price to pay : " << totalPrice << endl;
        //         cout << "Chef has money : " << k << endl;
        //         int d = v[i] % 2;
        //         int lastPriceWithOffer = (v[i] / 2);
        //         if (d == 1)
        //             lastPriceWithOffer += 1;
        //         cout << "last value : " << v[i] << endl;
        //         cout << "last value with offer : " << lastPriceWithOffer << endl;
        //         cout << "Price we can pay after discount : " << totalPrice - lastPriceWithOffer << endl;
        //         if (totalPrice - lastPriceWithOffer <= k)
        //         {
        //             cout << "done" << endl;
        //             // ans=ans-1;
        //             break;
        //         }
        //         else
        //         {
        //             cout << "last value is not enough, so totally removed it " << endl;
        //             totalPrice -= v[i];
        //             ans = ans - 1;
        //         }
        //     }
        // }
        long long mney=k;
        ans=0;
        for(int i=0;i<n;i++){
            if(mney>=v[i]){
                mney-=v[i];
                ans++;
            }
            else{
                if(mney>=((v[i]+1)/2)){
                ans++;
                break;
                // mney-=v[i];
            }
            }
        }

        // cout << "Final ans : " << endl;
        cout << ans << endl;
    }
    return 0;
}