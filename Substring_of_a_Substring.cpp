#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

bool compareVal(string ros, char fc)
{

    for (char v : ros)
    {
        // cout<<"String char : "<<v<<" comapre char : "<<fc<<endl;
        if (v == fc)
        {
            return true;
        }
    }

    return false;
}
void solve(string ip)
{
    string ros;
    // cout << "String : " << ip << endl;
    int n = ip.length();
    // cout << "Length : " << n << endl;
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    else if (n == 2)
    {
        if (ip[0] != ip[1])
        {
            cout << "1" << endl;
            return;
        }
        else
        {
            cout << "-1" << endl;
            return;
        }
    }
    else
    {
        bool flag=false;
        int l = 0, r = n - 1;
        string middleStringFC;
        while (l < r)
        {
            // cout << "L : " << l << endl;
            char firstChar = ip[l];
            // cout << "First char : " << firstChar << endl;
            // cout << "R : " << r << endl;
            char lastChar = ip[r];
            // cout << "last char : " << lastChar << endl;

            middleStringFC=ip.substr(l+1,r-l-1);
            // cout<<"Middle string : "<<middleStringFC<<endl;

            bool compareFirst = compareVal(middleStringFC, firstChar);
            bool compareLast = compareVal(middleStringFC, lastChar);

            if(compareFirst==true){
            //   cout<<"Remove first char : "<<firstChar<<endl;      
            l=l+1;
            }
            if(compareLast==true){
                // cout<<"Remove last char : "<<lastChar<<endl;
            r=r-1;
            }
           else if(compareFirst==false&&compareLast==false){
            //    cout<<"String : "<<middleStringFC<<" satisfied all"<<endl;
            cout<<middleStringFC.length()<<endl;
                flag=true;
            break;
           }

        }

            if(flag==false){
                cout<<"-1"<<endl;
            }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        // long long n;
        // cin >> n;
        string ip;
        cin >> ip;

        solve(ip);
    }
    return 0;
}