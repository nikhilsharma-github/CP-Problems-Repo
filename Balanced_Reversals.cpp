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
        string s;
        cin>>s;
        int slow=0,fast=0;
        while(fast<n){
            if(s[fast]=='0'){
                swap(s[fast],s[slow]);
                slow++;
            }
            fast++;
        }
        cout<<s<<endl;

    }
    return 0;
}