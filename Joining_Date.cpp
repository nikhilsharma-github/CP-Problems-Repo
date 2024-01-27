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
        // cout<<"Testcase : "<<test+1<<endl;
        long long c, s;
        cin >> c >> s;
        // cout<<"pair : "<<c<<" "<<s<<endl;

        if (c <= 5)
        {
            cout << "0" << endl;
            continue;
        }
        int mul=c/5;
        int rem=c%5;
        int ans=mul*5+rem;


            if(s>ans){ 
            // cout<<"Greater than last 5 squad "<<endl;
            cout<<"0"<<endl;
            continue;
        }
        

        int shiftspossible=c/5;        
        if(c%5==0)
        shiftspossible-=1;



        // cout<<"Possible shifts : "<<shiftspossible<<endl;

        int excepts=s/5;

        if(s%5==0)
        excepts--;
        // cout<<"Excepts : "<<excepts<<endl;
        // cout<<" ANS : "<<endl;
        cout<<shiftspossible-excepts<<endl;

    }
    return 0;
}