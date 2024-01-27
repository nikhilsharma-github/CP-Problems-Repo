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
        long long n,x;
        cin >> n>>x;
        // cout<<"N: "<<n<<" X : "<<x<<endl;
        // int two=n/2;
        // int three=n/3;

        // cout<<two*x*2-(three*1)<<endl;
        long long price=0;
        for(int i=1;i<=n;i++){
            // cout<<"For buying product no : "<<i<<endl;
            if(i%3==0){
                // price=price-x;
                continue;
            }
            else{
                price=price+x;
            }
            // cout<<"Price paid till now : "<<price<<endl;
        }
        cout<<price<<endl;



    }
    return 0;
}