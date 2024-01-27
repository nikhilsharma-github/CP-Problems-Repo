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
        // cout<<"Testcase : "<<test+1<<endl;
        long long nov, totalWeapon, maxLimit;
        cin >> nov >> totalWeapon >> maxLimit;

        unordered_set<int> time;

        for (int i = 0; i < nov; i++)
        {
            int t;
            cin >> t;
            time.insert(t);
        }

        // for (auto r : time)
        //     cout << r << endl;
        long long day = 0, mx = 1, remover = 0;
        while (totalWeapon > 0)
        {
            day++;
            if (time.find(day) != time.end())
            {

                time.erase(time.find(day));
                remover = maxLimit * mx;
                mx = mx + 1;
                //   cout<<"From day "<<day<<" remover becomes : "<<remover<<endl;
            }
            totalWeapon -= remover;
            //   cout<<"On day "<<day<<endl;
            //   cout<<"elements left : "<<totalWeapon<<endl;
            //   cout<<"remover value running : "<<remover<<endl;
        }
        //     time.insert(8880);
        //   for(auto r:time)
        //     cout<<r<<endl;
        cout<<day<<endl;
    }
    return 0;
}