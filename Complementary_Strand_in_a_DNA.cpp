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
        string s,a="";
        cin>>s;

        for(char c:s){
            if(c=='A'){
                a=a+'T';
            }
            else if(c=='T'){
                a=a+'A';
            }
            
            else if(c=='C'){
                a=a+'G';
            }
            else if(c=='G'){
                a=a+'C';
            }
            
        }

        cout<<a<<endl;



    }
    return 0;
}