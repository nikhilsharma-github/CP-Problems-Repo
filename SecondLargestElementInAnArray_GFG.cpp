#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << " GIVEN ARRAY IS : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl
             << endl;
        // cout << " Naive solution : " << endl;
        int m = INT_MIN, sm = INT_MIN, indexm = -1, indexsm = -1;
        // // cout<<m<<endl;
        
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] > m)
        //     {
        //         indexm = i;
        //         m = a[i];
        //     }
        // }
        // cout << " max element is : " << m << " at index : " << indexm << endl;

        // for (int i = 0; i < n; i++)
        // {

        //     if (a[i] > sm && a[i] < m)
        //     {
        //         sm = a[i];
        //         indexsm = i;
        //     }
        // }

        // if (sm == m || sm < 0)
        //     cout << "no second max element present" << endl;
        // else
        //     cout << " second max element is : " << sm << " at index : " << indexsm << endl;

        // Efficient SOLUTION
        cout << endl;
        cout << "EFFICIENT SOLUTION" << endl;

        indexm = -1, indexsm = -1, m = INT_MIN, sm = INT_MIN;

        for (int i = 0; i < n; i++)
        {

            if (a[i] > m)
            {

                sm = m;
                m = a[i];

                indexsm=indexm;
                indexm=i;
            }
            else if (a[i] == m)
            {
                continue;
            }
            else if (a[i] < m)
            {

                if (a[i] < sm)
                    continue;
                else if (sm == INT_MIN)
                {
                    sm = a[i];
                     indexsm=i;
                }
                else if (a[i] >= sm)
                {
                    sm = a[i];

                    indexsm=i;
                }
            }
        }

        cout << " max element is : " << m << " at index : " << indexm << endl;
        
        if (sm == m || sm < 0)
            cout << "no second max element present" << endl;
        else
            cout << " second max element is : " << sm << " at index : " << indexsm << endl;


        
    }
    return 0;
}
