#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void sol(long long n)
{
    // cout<<"For n: "<<n<<endl;
    // cout<<"ANS : "<<endl;
    string ans="";
    if(n%2==0){
            for(long long i=1;i<=n;i++){
                if(i==1||i==n){
                    ans=ans+"1";
                }
                else{

                    ans=ans+"0";
                }
            }
    }
    if(n%2!=0){
            for(long long i=1;i<=n;i++){
                if(i==(n/2)+1){
                    ans=ans+"1";
                }
                else{
                    ans=ans+"0";
                }
            }
    }

    cout<<ans<<endl;

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

        sol(n);
    }
    // for(int i=1;i<100;i++)
    // cout<<i<<endl;
    return 0;
}