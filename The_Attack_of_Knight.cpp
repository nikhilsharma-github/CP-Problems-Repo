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
        long long a, b, x, y;
        cin >> a >> b;
        cin >> x >> y;

        // // same row
        // if(x1==x2&&y2==y1+2||y1==y2+2){
        //     cout<<"YES"<<endl;
        // }
        // else if(x1==x2&&y2==y1+4||y1==y2+4){
        //     cout<<"YES"<<endl;
        // }
        // //same column
        // else if(y1==y2&&x1==x2+2||x2==x1+2){
        //     cout<<"YES"<<endl;
        // }
        // else if(y1==y2&&x1==x2+4||x2==x1+4){
        //     cout<<"YES"<<endl;
        // }

        vector<pair<int, int>> positions;
        if (a - 2 >= 1)
        {
            if (b - 1 >= 1)
            {
                positions.push_back({a - 2, b - 1});
            }
            if (b + 1 <= 8)
            {
                positions.push_back({a - 2, b + 1});
            }
        }
        if (a + 2 <= 8)
        {
            if (b - 1 >= 1)
            {
                positions.push_back({a + 2, b - 1});
            }
            if (b + 1 <= 8)
            {
                positions.push_back({a + 2, b + 1});
            }
        }
        if (b - 2 >= 1)
        {
            if (a - 1 >= 1)
            {
                positions.push_back({a - 1, b - 2});
            }
            if (a + 1 <= 8)
            {
                positions.push_back({a + 1, b - 2});
            }
        }
        if (b + 2 <= 8)
        {
            if (a - 1 >= 1)
            {
                positions.push_back({a - 1, b + 2});
            }
            if (a + 1 <= 8)
            {
                positions.push_back({a + 1, b + 2});
            }
        }
        if (x - 2 >= 1)
        {
            if (y - 1 >= 1)
            {
                positions.push_back({x - 2, y - 1});
            }
            if (y + 1 <= 8)
            {
                positions.push_back({x - 2, y + 1});
            }
        }
        if (x + 2 <= 8)
        {
            if (y - 1 >= 1)
            {
                positions.push_back({x + 2, y - 1});
            }
            if (y + 1 <= 8)
            {
                positions.push_back({x + 2, y + 1});
            }
        }
        if (y - 2 >= 1)
        {
            if (x - 1 >= 1)
            {
                positions.push_back({x - 1, y - 2});
            }
            if (x + 1 <= 8)
            {
                positions.push_back({x + 1, y - 2});
            }
        }
        if (y + 2 <= 8)
        {
            if (x - 1 >= 1)
            {
                positions.push_back({x - 1, y + 2});
            }
            if (x + 1 <= 8)
            {
                positions.push_back({x + 1, y + 2});
            }
        }
        set<pair<int, int>> checkset;
        bool checkflag = false;
        for (auto const &e : positions)
        {
            if (checkset.find(e) != checkset.end())
            {
                checkflag = true;
                break;
            }
            checkset.insert(e);
        }
        if (checkflag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}