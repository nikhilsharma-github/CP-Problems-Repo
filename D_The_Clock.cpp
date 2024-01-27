#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(int hour, int minutes, int x)
{

    vector<string> sss{"0000", "0110", "0220", "0330", "0440", "0550", "1001", "1111", "1221", "1331", "1441", "1551", "2002", "2112", "2222", "2332"};

    set<string> ip(sss.begin(), sss.end());

    //    for (auto it = ip.begin(); it !=
    //                              ip.end(); ++it)
    //         cout << ' ' << *it;

    set<string> repeat;

    string start = to_string(hour) + to_string(minutes);
    cout << "Starting value : " << start << endl;

    int ans = 0;
    int newhour = x / 60;
    int newminutes = x % 60;
    cout << newhour << " " << newminutes << endl;
    cout << "Value to add : " << newhour << " " << newminutes << endl;

    int currenthour = hour;
    int currentminutes = minutes;

    string strval = to_string(currenthour) + to_string(currentminutes);

    for (int i = 0; i < 1449; i++)
    {
       if(repeat.find(strval)) 
        currenthour = currenthour + newhour;
        currentminutes = currentminutes + newhour;
        cout << "new shift : " << currenthour << " " << currentminutes << endl;
        strval = to_string(currenthour) + to_string(currentminutes);
        if (ip.find(strval) != ip.end())
        {
            ans++;
            repeat.insert(strval);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        int hour = 0, minutes = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int val = s[i] - '0';
            // cout<<"Current val : "<<val<<endl;
            // cout<<"HOUR : "<<hour<<" MINUTES: "<<minutes<<endl;
            if (i == 0)
            {
                hour = hour + val * 10;
            }
            if (i == 1)
            {
                hour = hour + val;
            }
            if (i == 2)
            {
                continue;
            }
            if (i == 3)
            {
                minutes = minutes + 10 * val;
            }
            if (i == 4)
            {
                minutes = minutes + val;
            }
        }

        // cout<<hour<<" "<<minutes<<endl;
        solve(hour, minutes, x);
    }
    return 0;
}