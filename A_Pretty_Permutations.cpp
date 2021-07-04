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
        // cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;


     
        if (n % 2 == 0)
        {

            cout<<n<<" ";
            for (int i = 1; i <= n - 1; i++)
            {
                if (i % 2 == 0)
                    cout << i - 1 << " ";
                else
                    cout << i + 1 << " ";

    
            }
    
        }
        else
        {

            cout << n << " ";
            for (int i = 1; i <= n - 2; i++)
            {
                cout << i << " ";
 
             }
            cout<<n-1;
 
        }
        cout << endl;
    }
    return 0;
}