#include <bits/stdc++.h>
using namespace std;

void solve2(vector<long long> input, long long maxVal, vector<bool> soe)
{

    for (int i = 0; i < input.size(); i++)
    {
        long long val = input[i];

        if (val == 1)
        {
            cout << "0" << endl;
            continue;
        }
        if (val == 2)
        {
            cout << "1" << endl;
            continue;
        }

        long long count = 0;

        for (int i = 2; i <= val; i++)
        {
            if (soe[i] == true)
                count++;
        }
        cout << count << endl;
    }
}

void solution(vector<long long> input, long long maxVal)
{

    vector<bool> soe(maxVal + 1, true);

    for (int i = 2; i <= maxVal; i++)
    {
        if (soe[i] == true)
        {
            for (int j = i * i; j <= maxVal; j = j + i)
            {
                soe[j] = false;
            }
        }
    }
    // cout << "Sieve upto " << maxVal << endl;
    // for (int i = 2; i <= maxVal; i++)
    // {
    //     if (soe[i] == true)
    //         cout << i << " ";
    // }

    // cout << endl;

    solve2(input, maxVal, soe);
}

// void sol3(long long n)
// {
//     // cout<<"N :"<<n<<endl;
//     int fact = 1;
//     long long count = 0;
//     for (int k = 2; k <=n; k++)
//     {
//         fact = fact * (k - 1);
//         if ((fact + 1) % k == 0)
//             count++;
//             // cout<<k<<endl;

//     }

//     cout << count << endl;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    vector<long long> input;
    long long maxVal = 0;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;
        // cout<<"N : "<<n<<endl;

        // maxVal = max(maxVal, n);
        // input.push_back(n);
        long long ans=0;

        if(n%2==0)
        ans=n/2;
        else
        ans=(n/2)+1;
        cout<<ans<<endl;
    }
    // solution(input,maxVal);

    // while (test--)
    // {
    //     long long n;
    //     cin >> n;

    //     sol3(n);
    // }
    return 0;
}