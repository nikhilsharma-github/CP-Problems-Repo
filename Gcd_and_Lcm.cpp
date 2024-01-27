#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

map<long long, long long> mp;

void pre(long long n)
{
    map<long long, vector<pair<int, int>>> mpv;
    for (long long i = 1; i <= 100; i++)
    {
        for (long long j = 1; j <= 100; j++)
        {
            // cout<<"For pair "<<"( "<<i<<", "<<j<<" )"<<endl;
            long long gcdsq = (__gcd(i, j)) * (__gcd(i, j));
            long long lcmsq = ((i * j) * (i * j)) / gcdsq;
            long long value = ((i * i) + (j * j) + (gcdsq) + (lcmsq));
            // cout<<"sum will be : "<<value<<endl;
            mp[value]++;
            mpv[value].push_back({i, j});
        }
    }

    // cout << "MAP : " << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << "For N: " << it->first << ", pairs possible are:  " << it->second << endl;
        cout << "Pairs will be : " << endl;
        vector<pair<int, int>> vp = mpv[it->first];
        for (pair<int, int> p : vp)
        {
            cout << p.first << " " << p.second << endl;
        }
        cout<<it->first<<" "<<it->second<<endl;
    }
}

void solve(long long n)
{

    cout<<"MY CODE STARTS : "<<endl;
    long long ans=0;
    if (n % 2 != 0)
    {
        cout << "0" << endl;
        return;
    }

    for (long long i = 0; i < sqrt(n); i++)
    {
        long long p1square=i*i;
        long long p2square=n-p1square;
        cout<<i<<" "<<sqrt(p2square)<<endl;
        if (ceil((double)sqrt(p2square)) == floor((double)sqrt(p2square))){
               
        } 
    }

    if(mp.find(n)==mp.end()){
        cout<<n<<" has no answer "<<endl;
    }
    else{
        auto it=mp.find(n);
        cout<<n<<" has "<<it->second<<" pairs "<<endl;
    }        
    cout<<"OUR CODE RESULT : "<<endl;
    cout<<n<<" has "<<ans<<" pairs "<<endl;
    // cout<<n<<" "<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    pre(100);
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        long long n;
        cin >> n;

        solve(n);
    }

    // for(int i=1;i<400;i++){
    //     for(int j=1;j<400;j++){
    //         if(i*i+j*j==400)
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

    // for(int i=1;i<100;i++)
    // cout<<i<<endl;
    return 0;
}