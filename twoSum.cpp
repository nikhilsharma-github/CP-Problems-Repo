#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

vector<int> sum_two(vector<int> input_array)
{
    int n = input_array.size();
    vector<int> oldRes(input_array.begin(), input_array.end());
        vector<int> newRes;
    while (n > 2)
    {
        newRes.clear();
        int i = 0, j = oldRes.size() - 1;
        while (i <=j)
        {
            if(i==j){
                newRes.push_back(oldRes[i]);
                i++;
                j--;
                continue;
            }
            newRes.push_back(oldRes[i] + oldRes[j]);
            i++, j--;
        }
        oldRes = newRes;
        n = newRes.size();
    }

    return newRes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;
        long long n, t;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }
        vector<int> ans = sum_two(v);

        for (int v : ans)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}