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
        long long n,loc=0;
        cin >> n;

        // for(int i=1;i<=n;i++){
        //     // cout<<"Current i: "<<i<<endl;
        //     // cout<<"Curr Loc val : "<<loc<<endl;
        //     if(loc<0)
        //     loc=loc+i;
        //     else if(loc>=0)
        //     loc=loc-i;    

            // cout<<"Loc moved to : "<<loc<<endl;
        // }
    //    cout<<"Math loc : "<<endl;
        if(n%2==0)
           cout<<n/2<<endl;
        else{
            cout<<((n/2)+1)*-1<<endl;
        }
        // cout<<"Loop loc : "<<endl;
        // cout<<loc<<endl;


    }
    return 0;
}