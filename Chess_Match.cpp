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
    
    long long n,a,b;
    cin>>n>>a>>b;

    long long tt=2*(180+n);
    long long ttle= a+b;

    long long dog= tt-ttle;
    cout<<dog<<endl;
   }

    return 0;
}