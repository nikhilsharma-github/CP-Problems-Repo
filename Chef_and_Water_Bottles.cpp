#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long nb,b,t;
        cin >> nb>>b>>t;

        if(t/b<=nb)
        cout<<t/b<<endl;
        else
        cout<<nb<<endl;


    }
    return 0;
}