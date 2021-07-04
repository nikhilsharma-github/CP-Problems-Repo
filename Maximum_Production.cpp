#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long d,x,y,z;
        cin>>d>>x>>y>>z;
       long long way1,way2;
       way1=(7*x);
       way2=(y*d+z*(7-d));
        long long maxwork= max(way1,way2);
        cout<<maxwork<<endl;
}
    return 0;
}