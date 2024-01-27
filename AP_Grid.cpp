#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(long long n, long long m)
{

    // cout << "For n : " << n << " M :" << m << endl;
    long long diff1=1,diff2=1,value=1;
    vector<vector<long long>> mat;

    if (n <= m)
    {
        value=1;
        long long ans=1;
        diff1 = min(n, m) + 1;
        for (int i = 0; i < n; i++)
        {
            vector<long long> k;
            // if (i > 0)
            //   diff2 = mat[i - 1][0] + diff1;
               
            for (int j = 0; j < m; j++)
            {
                // if (i == 0)
                // {
                //     k.push_back(j+1);
                // }
                // else
                // {
                //     k.push_back(diff2);
                // }
                // diff2=diff2+i+1;
                k.push_back(ans+value*j);
            }
            ans=ans+diff1;
            value++;
            mat.push_back(k);
        }
    }
    else
    {
        value=1;
        diff1 = min(n, m) + 1;
        for (int i = 0; i < n; i++)
        {
            vector<long long> k;
            // if (i > 0)
            //   diff2 = mat[i - 1][0] + diff1;
               
            for (int j = 0; j < m; j++)
            {
                // if (i == 0)
                // {
                //     k.push_back(j+1);
                // }
                // else
                // {
                //     k.push_back(diff2);
                // }
                // diff2=diff2+i+1;
                k.push_back(value+diff1*j);
            }
            mat.push_back(k);
            value++;
            diff1++;

        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
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
        long long n, m, t = 0;
        cin >> n >> m;

        solve(n, m);

        // for(int i=1;i<10;i++){
        //     for(int j=i;j<10;j++){
        //         cout<<i<<" "<<j<<endl;
        //     }

        // }
    }
    return 0;
}