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

        int ind = 0, eng = 0, draw = 0;

        for (int i = 1; i <= 5; i++)
        {

            int t=0;
            cin>>t;

            if(t==0){
                draw++;
            }
            else if(t==1){
                ind++;
            }
            else if(t==2){
                eng++;
                
            }
        }

        if(ind>eng){
            cout<<"INDIA"<<endl;
        }
        else if(eng>ind){
            cout<<"ENGLAND"<<endl;
        }
        else if(draw==5||ind==eng){
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}