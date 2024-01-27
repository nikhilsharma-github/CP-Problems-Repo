#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void bishop(vector<vector<char>> mat)
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            // cout << "Current val : " << mat[i][j] << " at index : ( "<<i<<", "<<j<<" )"<< endl;
            if (mat[i - 1][j - 1] == '#' && mat[i - 1][j + 1] == '#' && mat[i + 1][j - 1] == '#' && mat[i + 1][j + 1] == '#')
            {
                cout << i+1 << " " << j+1 << endl;
                break;
            }
            // cout << mat[i][j];
        }
        // cout << endl;
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

        vector<vector<char>> mat;
        char t;
        for (int i = 0; i < 8; i++)
        {
            vector<char> ip;
            for (int j = 0; j < 8; j++)
            {
                cin >> t;
                ip.push_back(t);
            }
            mat.push_back(ip);
        }

        bishop(mat);
    }
    return 0;
}