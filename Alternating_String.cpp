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
        long long n,zero=0,one=0;
        cin >> n;
        string s;
        cin>>s;
        
        for(char c:s){
          c=='0'?zero++:one++;
        }
        // cout<<"zero : "<<zero<<" one: "<<one<<endl;
        int minDig=min(zero,one);
        int maxDig=max(zero,one);


        if(zero==n||one==n){
            // cout<<"Only one can alternate "<<endl;
            cout<<1<<endl;
        }
        else if(zero+one==n&&zero==one){
            // cout<<"Both are same and full to alternate"<<endl;
            cout<<n<<endl;
        }
        else{
             int minVal=min(zero,one);
             int maxVal=max(zero,one);

             if(maxVal>=minVal+1){
                 cout<<minVal*2+1<<endl;
             }
        }
        

    }
    return 0;
}