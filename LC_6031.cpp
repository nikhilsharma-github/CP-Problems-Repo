#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
vector<int> findKDistantIndices(vector<int> &nums, int key, int k)
{

    set<int> ans;
    vector<int> ansVector;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == key)
        {
            // cout << "Key we found " << nums[i] << " at " << i << endl;

            for(int j=0;j<n;j++){

                if(abs(i-j)<=k)
                ans.insert(j);
            }

            // cout << "Range of checking : " << i - k << " " << i + k << endl;

            // for (int d = i - k; d <= i + k; d++)
            // {

            //     if (i - d >= 0 && i + d < n)
            //     {

            //         cout << "For valid check " << i - d << " and " << i + d << endl;
            //         int absval1 = abs(i - d);
            //         int absval2 = abs(d-i);

            //         cout << "Left abs is : " << absval1 << endl;
            //         cout << "Right abs is : " << absval2 << endl;

            //         if (absval1 <= k)
            //             ans.insert(i);
            //         if (absval2 <= k)
            //             ans.insert(i);
            //     }
            // }
            // cout << "Key we found " << nums[i] << " at " << i << endl;
            // int lb = i - k;
            // int rb = i + k;

            // cout << "Leftcheck : " << lb << endl;
            // cout << "RightCheck : " << rb << endl;

            // for (int v = lb; v <= i; v++)
            // {
            //     int absval = abs(v - i);
            //     cout<<"Index : "<<v<<endl;
            //     cout<<"abs val : "<<absval<<endl;

            //     if (absval <= k&&)
            //     {

            //         cout << "Valid left val : " << nums[absval] << endl;
            //         ans.insert(absval);
            //     }
            // }

            // for (int v = rb; v < n; v++)
            // {
            //     int absval = abs(v - i);
            //     if (absval <= k)
            //     {
            //         cout << "Valid right val : " << nums[absval] << endl;
            //         ans.insert(absval);
            //     }
            // }
        }
    }
    // cout << "ANS" << endl;
    // cout << "Values are :" << endl;
    for (auto it = ans.begin(); it != ans.end(); it++)
    {
        int val = (*it);
        ansVector.push_back(val);
        // cout<<*it<<endl;
    }

    return ansVector;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> ip;

    int t, key, k;
    while (cin >> t)
    {
        ip.push_back(t);
    }

    int n = ip.size();
    // cout << "Values in array : " << endl;
    // for (int r : ip)
    //     cout << r << " ";
    // cout << endl;

    // cout << "Current size of array " << ip.size() << endl;
    k = ip[n - 1];
    ip.pop_back();
    n = ip.size();

    // cout << " K we get : " << k << endl;
    // cout << "size of array now : " << n << endl;

    key = ip[n - 1];
    ip.pop_back();
    n = ip.size();

    // cout << " Key we get : " << key << endl;
    // cout << "size of array now : " << n << endl;

    vector<int> ans = findKDistantIndices(ip, key, k);
    for (int r : ans)
        cout << r << " ";
    cout << endl;
    return 0;
}