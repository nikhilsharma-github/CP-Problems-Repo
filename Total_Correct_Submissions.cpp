#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
        long long n;
        cin >> n;

        //  Input an array
        vector<int> vec;

        multimap<string, int> ques;
        set<string> val;
        set<string>::iterator vs;

        for (int i = 1; i <= n * 3; i++)
        {
            string temp;
            int tn;
            cin >> temp;
            cin >> tn;
            //   cout<<temp<<endl;
            //   cout<<tn<<endl;

            ques.insert(pair<string, int>(temp, tn));
            val.insert(temp);
            cout << "value inserted in multimap : " << temp << " " << tn << endl;
            cout << "value inserted in set : " << temp << endl;
        }

        multimap<string, int>::iterator it;

        cout << "values in multimap : " << endl;
        for (it = ques.begin(); it != ques.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
        cout << "Values in set to count frequencies" << endl;
        for (vs = val.begin(); vs != val.end(); vs++)
        {
            cout << *vs << " ";
        }
        cout << endl;

        cout << "Solving substrings frequency now" << endl;
        for (vs = val.begin(); vs != val.end(); vs++)
        {
            int count = ques.count(*vs);
            string k = (*vs);
            // cout<<k<<endl;
            int r = ques.lower_bound(k)->second;
            // cout<<count*r<<" ";
            vec.push_back(count * r);
            cout << "frequencey for substring : " << k << " is :" << count * r << endl;
        }
        sort(vec.begin(), vec.end());

        cout << "printing final output " << endl;
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
        cout << endl;
    }
    return 0;
}
