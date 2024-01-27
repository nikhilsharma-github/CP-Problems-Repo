#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;

    vector<int> v;

    while(n>10){
        int d=n%10;

        if(9-d<5)
        {
            v.push_back(9-d);
        }
        else{
            v.push_back(d);
        }
        n=n/10;
    }

    int ld=n%10;
    if(9-ld<5)
        {
            if(9-ld==0)
            v.push_back(1);
            else
            v.push_back(9-ld);
        }
        else{
            v.push_back(ld);
        }

    reverse(v.begin(),v.end());

    for(int r:v)
    cout<<r;
    cout<<endl;


    return 0;
}