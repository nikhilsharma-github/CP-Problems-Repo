#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int n,int arr[]){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> valuesArray = {1, 3, 9, 27, 81, 243, 729, 2187, 6561, 19683, 59049, 177147, 531441, 1594323, 4782969, 14348907, 43046721, 129140163, 387420489};
    long long int test;
    cin >> test;
    while (test--)
    {

        long long int n;
        cin >> n;
        if (n > 19)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << valuesArray[i] << " ";
            }
            cout << endl;
                }
    }
    return 0;
}