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

        int max = INT_MIN, secondmax = INT_MIN;

        for (int i = 0; i < n; i++)
        {

            if (a[i] > max)
            {
                secondmax = max;
                max = a[i];
            }
            else if (a[i] <= secondmax)
            {
                if (secondmax == INT_MIN)
                    secondmax = a[i];
            }
            else if (a[i] > secondmax)
            {

                if (a[i] <= max && a[i] > secondmax)
                    secondmax = a[i];
            }
        }
        cout<<"max : "<<max<<endl;
        cout<<"second max : "<<secondmax<<endl;
    }
    return 0;
}
