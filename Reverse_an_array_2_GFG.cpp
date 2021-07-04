#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;



        //  Input an array
         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
           cout<<"Array is : "<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

        int l=0,r=n-1;
         
         while(l<r)
         {
             a[l]=(a[l]^a[r]);
             a[r]=(a[l]^a[r]);
             a[l]=(a[l]^a[r]);
            l++,r--;
         }
        cout<<"after reverse: "<<endl;
           cout<<"Array is : "<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
            }
    return 0;
}