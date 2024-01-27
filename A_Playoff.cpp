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
         long long int n;
        cin >> n;
        // cout<<"N: "<<n<<endl;
         if(n==1){
         cout<<1<<endl;
            continue;
         }

         
            
        long long ans=pow(2,n);
        // cout<<"2^N: "<<ans<<endl;

        cout<<ans-1<<endl;

    }
    return 0;
}