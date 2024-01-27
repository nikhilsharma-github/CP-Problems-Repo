#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void reverseArray(vector<long long> &v, int l, int r)
{

    while (l < r)
    {
        swap(v[l], v[r]);
        r--, l++;
    }
}
void mct(vector<long long> v)
{

    // int firstMaxI = 0, secondMaxI = 1, n = v.size();

    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] >= v[firstMaxI])
    //     {
    //         firstMaxI = i;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] >= v[secondMaxI]&&i!=firstMaxI)
    //     {
    //         secondMaxI = i;
    //     }
    // }

    // cout<<"First maximum is "<<v[firstMaxI]<<" at index "<<firstMaxI<<endl;
    // cout<<"Second maximum is "<<v[secondMaxI]<<" at index "<<secondMaxI<<endl;

    // if(firstMaxI<=secondMaxI){
    //     swap(firstMaxI,secondMaxI);
    // }
    // reverseArray(v, firstMaxI, secondMaxI);
    // cout<<endl;
    // cout<<"Array after reversal : "<<endl;
    // cout<<v[firstMaxI]+v[secondMaxI]<<endl;
    sort(v.begin(),v.end(),greater<>());
    // for(int k:v){
    //     cout<<k<<" ";
    // }
    // cout<<endl;
    cout<<v[0]+v[1]<<endl;
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
        long long n, t;
        cin >> n;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.push_back(t);
        }

        mct(v);
    }
    return 0;
}