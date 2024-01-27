#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int palindromicSubstring(string str, vector<long long> wl)
{

    long long finalAns = 0;
    for (long long c = 0; c < wl.size(); c++)
    {
        int ws = wl[c];
        cout<<"current window size : "<<ws<<endl;

        bool flag = true;
        for (int i = 0; i < str.size() - ws+1; i++)
        {

            int l = i, r = i + ws-1;
             cout<<"Starting from : "<<l<<" "<<str[l]<<"  to  : "<<r<<" "<<str[r]<<endl;   

            while (l < r)
            {
                if (str[l] != str[r])
                {
                    for(int v=l;v<r;v++){
                        cout<<str[v];
                    }
                    cout<<" is not a palindrome"<<endl;
                    flag = false;
                    break;
                }
                l++,r--;
            }
            if (flag == true)
                finalAns++;
        }
    }

    return finalAns;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long sl = 0;
    cin >> sl;
    string str;
    cin>>str;
    // cout<<str<<endl;
    
    long long t;
    cin >> t;

    vector<long long> wl;

    for (long long i = 0; i < t; i++)
    {
        long long k;
        cin >> k;
        wl.push_back(k);
    }

    cout << palindromicSubstring(str, wl);
    return 0;
}