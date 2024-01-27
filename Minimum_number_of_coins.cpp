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
        long long n;
        cin >> n;
        if(n%5!=0){
            cout<<-1<<endl;
            continue;
        }
        int trc=n/10;
        int frc=(n%10);
        frc=frc/5;
        cout<<trc+frc<<endl;
    }
    return 0;
}