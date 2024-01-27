#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void printVec(vector<long long> v)
{
    for (long long v : v)
    {
        cout << v << " ";
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
        // cout << "\nTestcase : " << test + 1 << endl;
        int evenNumCount = 0, oddNumCount = 0;
        int hto = 0;
        long long sumPairProduct = 0;
        long long n, t;
        cin >> n;

        vector<long long> v;

        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
            if (t % 2 == 0)
                evenNumCount++;
            else
                oddNumCount++;

            if (i != 0)
            {
                sumPairProduct += (v[i] * v[i - 1]);
            }
        }
        // cout << "given vector is : " << endl;
        // printVec(v);
        // cout << "Total sumPairProduct :" << sumPairProduct << endl;
        // cout << "Has even : " << evenNumCount << endl;
        // cout << "Has odds : " << oddNumCount << endl;
        // cout << "Final ans :" << endl;
        if (sumPairProduct % 2 != 0)
        {
            printVec(v);
            continue;
        }
        // CORRECT
        else if (evenNumCount == 0 && sumPairProduct % 2 == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        // CORRECT
        else if (evenNumCount >= n - 1)
        {
            cout << "-1" << endl;
            continue;
        }
        // CORRECT
        else if (oddNumCount == n && sumPairProduct % 2 == 0)
        {
            cout << "-1" << endl;
            continue;
        }
        // CORRECT
        else if (oddNumCount <= 1)
        {
            cout << "-1" << endl;
            continue;
        }
        // else if (oddNumCount%2==0 && evenNumCount == 1&&n>3)
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (v[i] % 2 == 0)
        //         {
        //             swap(v[i], v[1]);
        //             break;
        //         }
        //     }
        //     printVec(v);
        //     continue;
        // }
        else
        {

            int slow = 0, fast = 0;
            while (fast < n)
            {
                if (v[fast] % 2 != 0)
                {
                    swap(v[slow], v[fast]);
                    slow++;
                }
                fast++;
            }
            sumPairProduct = 0;
            for (int i = 0; i < n; i++)
            {
                if (i != 0)
                {
                    sumPairProduct += (v[i] * v[i - 1]);
                }
            }
            // cout << "Last check manager : " << endl;
            if (sumPairProduct % 2 != 0)
            {
                printVec(v);
            }
            else 
            {
                // cout << "-1" << endl;
                for (int i = 0; i < n; i++)
                {
                    if (v[i] % 2 == 0)
                    {
                        swap(v[i], v[1]);
                        break;
                    }
                }

                sumPairProduct = 0;
                for (int i = 0; i < n; i++)
                {

                    if (i != 0)
                    {
                        sumPairProduct += (v[i] * v[i - 1]);
                    }
                }

                if(sumPairProduct%2!=0){
                printVec(v);
                }
                else{
                    cout<<"-1"<<endl;
                }
            }
        }
    }
    return 0;
}