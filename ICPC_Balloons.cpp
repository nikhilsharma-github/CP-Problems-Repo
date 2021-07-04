#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
        long long n;
        cin >> n;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //    cout<<"Array is : "<<endl;
        // parray(a,n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            if (a[i] <= 7)
            {
                sum = sum + a[i];
            }
            if (sum == 28)
            {
                cout << i+1 << endl;
                break;
            }
        }

        // cout<<endl;
    }
    return 0;
}