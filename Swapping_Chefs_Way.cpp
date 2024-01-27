#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        long long n;
        cin >> n;
        string s, ip;
        cin >> s;
        ip = s;
        sort(s.begin(), s.end());

        if (ip == s)
        {
            cout << "YES" << endl;
            continue;
        }
        // cout<<s<<endl;

        int l = 0, r = n - 1;
        bool flag = false;
        while (l < r)
        {
            swap(ip[l],ip[r]);
                // cout<<"IIP : "<<ip<<endl;
            if(ip==s){
                cout<<"YES"<<endl;
                flag=true;
                break;
            }

            l++,r--;
        }

        if(flag==false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}