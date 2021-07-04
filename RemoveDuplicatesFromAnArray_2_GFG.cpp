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
        long long n;
        cin >> n;

        //  Input an array
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << "Array is : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        // Naive Approach

        // int nd[n];
        // int c = 1;
        // nd[0] = a[0];

        // for (int i = 1; i < n; i++)
        // {
        //     if (a[i] != a[i - 1])
        //     {
        //         nd[c] = a[i];
        //         c++;
        //     }
        // }

        // cout << "Array is : " << endl;
        // for (int i = 0; i < c; i++)
        // {
        //     cout << nd[i] << " ";
        // }
        // cout << endl;

        // EFFICIENT APPROACH
        int res=1;

        for(int i=1;i<n;i++){
            if(a[i]!=a[res-1])
            {
               a[res]=a[i];
               res++;
            }
        }
        cout<<"distinct array is : "<<endl;

        cout << "Array is : " << endl;
        for (int i = 0; i < res; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
        return 0;
}