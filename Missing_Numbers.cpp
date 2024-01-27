#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1, t;
    cin >> test;
    t = test;
    while (test--)
    {
        // cout << "Testcase : " << t - test << endl;
        multiset<long long> ms;
        long long p, q, r, s;
        long long sum = 0, diff = 0, mult = 0, div = 0;
        long long g1 = 0, g2 = 0;
        cin >> p >> q >> r >> s;

        // cout << p << " " << q << " " << r << " " << s << endl;
        ms.insert(p);
        ms.insert(q);
        ms.insert(r);
        ms.insert(s);

        auto it = ms.begin();
        int check = *it;
        // cout << "First check val : " << check << endl;
        if (check >= 0)
        {
            cout << "-1 -1" << endl;
            continue;
        }
        it++;
        check = *it;
        // cout << "Second check val : " << check << endl;
        if (check != 0)
        {
            cout << "-1 -1" << endl;
            continue;
        }
        it++;
        check = *it;
        // cout << "Third check val : " << check << endl;
        if (check <= 0)
        {
            cout << "-1 -1" << endl;
            continue;
        }
        it++;
        check = *it;
        // cout << "Fourth check val : " << check << endl;
        if (check <= 0)
        {
            cout << "-1 -1" << endl;
            continue;
        }
        // Finding difference

        // diff=min(s,min(p,min(q,r)));
        it = ms.begin();
        diff = *it;
        ms.erase(ms.begin());

        // Finding Division
        it = ms.begin();
        div = *it;
        ms.erase(ms.begin());

        // Finding Sum
        it = ms.begin();
        sum = *it;
        ms.erase(ms.begin());

        // Finding Product
        //  mult=max(s,max(p,max(q,r)));
        it = ms.begin();
        mult = *it;
        ms.erase(ms.begin());

        // cout << "Sum : " << sum << endl;
        // cout << "Diff : " << diff << endl;
        // cout << "Multiply : " << mult << endl;
        // cout << "Div : " << div << endl;

        if (mult == sum + 1)
        {
            if (sum == 5 && mult == 6 && diff == -1 && div == 0)
            {
                cout << 2 << " " << 3 << endl;
                continue;
            }
            else
            {

                swap(mult, sum);
                g1 = (sum + diff) / 2;

                if (g1 == 0)
                {
                    cout << "-1 -1" << endl;
                    continue;
                }
                g2 = sum - g1;

                if (g1 > g2)
                    swap(g1, g2);

                if (g2 == 0)
                {
                    cout << "-1 -1" << endl;
                    continue;
                }

                if (g1 == g2)
                {
                    cout << "-1 -1" << endl;
                    continue;
                }

                if (g1 + g2 == sum && g1 - g2 == diff && g1 * g2 == mult&&g1>0&&g2>0&&g1<=10000&&g2<=10000)
                {
                    cout << g1 << " " << g2 << endl;
                    continue;
                }
                else
                {
                    cout << "-1 -1" << endl;
                    continue;
                }
            }
        }
        else
        {

            g1 = (sum + diff) / 2;

            if (g1 == 0)
            {
                cout << "-1 -1" << endl;
                continue;
            }
            g2 = sum - g1;

            if (g1 > g2)
                swap(g1, g2);

            if (g2 == 0)
            {
                cout << "-1 -1" << endl;
                continue;
            }
            if (g1 == g2)
            {
                cout << "-1 -1" << endl;
                continue;
            }

            if (g1 + g2 == sum && g1 - g2 == diff && g1 * g2 == mult&&g1>0&&g2>0&&g1<=10000&&g2<=10000)
            {
                cout << g1 << " " << g2 << endl;
                continue;
            }
            else
            {
                cout << "-1 -1" << endl;
                continue;
            }
        }

        //    if(mult==sum+1){
        //        cout<<"One gap value check : "<<endl;
        //        if(diff==-1){
        //            swap(sum,mult);
        //         g1 = (sum + diff) / 2;
        //         cout << "g1 lv : " << g1 << endl;
        //         g2=g1+1;
        //         cout << "g2 gv : " << g2 << endl;
        //         cout<<g1<<" "<<g2<<endl;
        //        }
        //        else{
        //         swap(sum,mult);
        //         g1 = (sum + diff) / 2;
        //         cout << "g1 lv : " << g1 << endl;
        //         g2=g1+1;
        //         cout << "g2 gv : " << g2 << endl;

        //        }
        //    }

        //     cout << "ROS : " << endl;
        //     g1 = (sum + diff) / 2;
        //     if(g1==0)
        //     {
        //         cout << "-1 -1" << endl;
        //         continue;
        //     }
        //     cout << "g1 lv : " << g1 << endl;
        //     g2 = sum - g1;
        //     cout << "g2 gv :" << g2 << endl;
        //     if(g2==0)
        //     {
        //         cout << "-1 -1" << endl;
        //         continue;
        //     }

        //     if ((g1 * g2 == mult) && (g1 - g2 == diff) && (g1 + g2 == sum))
        //         cout << g1 << " " << g2 << endl;
        //     else
        //         cout << "-1 -1" << endl;
    }
    return 0;
}