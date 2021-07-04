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
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

 long long x=(a+c);
 long long y=(d+b);

//  cout<<x<<" "<<y<<endl;
        if(x==180&&y==180)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

 
 }
    return 0;
}