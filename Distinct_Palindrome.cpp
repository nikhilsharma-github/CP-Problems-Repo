#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--){
        // cout << "Testcase : " << test + 1 << endl;
        long long len, x;
        cin >> len >> x;
        // cout<<" Len : "<<len<<" x: "<<x<<endl;

        long long kk=len;
        int check = len / 2;

        if (len % 2 != 0)
            check++;

        if (x > check)
        {
            cout << "-1" << endl;
            continue;
        }

        len=len/2;
        

        string halfstring="";
        int halfstrlen=len;

        if(kk%2!=0)
        halfstrlen++;

        for(int i=1;i<=halfstrlen;i++){

            if(i<=x)
            halfstring+=(char)('a'+(i-1));
            else
            halfstring+=(char)('a');

        }    

        // cout<<"Halfstring : "<<halfstring<<endl;
        if(kk==1){
            // cout<<"ANS : "<<endl;
            cout<<halfstring<<endl;
            continue;
        }

        string halfstring2=halfstring;
        if(kk%2!=0){
        halfstring2=halfstring.substr(0,halfstring.size()-1);
        }
        // cout<<"Halfstring2 : "<<halfstring2<<endl;

        reverse(halfstring2.begin(),halfstring2.end());
        string fullstring= halfstring+halfstring2;

        // cout<<"Fullstring : "<<fullstring<<endl;
        cout<<fullstring<<endl;   
    }
    return 0;
}