#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(vector<long long> &v, long long k)
{

    long long maxval = v[0], n = v.size();
    // vector<long long> sortedarr(v.begin(),v.end());
    // sort(sortedarr.begin(),sortedarr.end());

    // for(long long k:v){
    //     maxval=max(k,maxval);
    // }

    // bool flag=true;
    // for(int i=n-1;i>=0;i--){
    //     // cout<<"Current val : "<<v[i]<<" Sorted val : "<<sortedarr[i]<<endl;
    //     if(v[i]==sortedarr[i]){
    //         // cout<<"SAME, no changes, continue"<<endl;
    //     continue;
    //     }
    //     else{
    //         if(v[i]>k){
    //             // cout<<"This value can't be changed, so NO "<<endl;
    //             flag=false;
    //             cout<<"NO"<<endl;
    //             break;
    //         }
    //         else{
    //             // cout<<"Can be reversed, continue"<<endl;
    //             continue;
    //         }
    //     }
    // }
    // if(flag==true)
    // cout<<"YES"<<endl;

    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (v[i-1]>v[i])
        {
            if(v[i]+v[i-1]>k){
            flag=false;
            break;
            }
            else{
               swap(v[i],v[i-1]); 
            }
        }
        else
        {
            continue;
        }
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long n, t = 0, k;
        cin >> n >> k;

        vector<long long> v;

        for (long long i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }

        solve(v, k);
    }
    return 0;
}