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
void alteredlastelement(int a[],int n){

  int i=n-1,le=a[n-1],k=-1;

    while(a[i]==a[i-1]&&i>0)
    i--;

    a[]


}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;

        //  Input an array

         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<"Array is : "<<endl;
        parray(a,n);
        // alteredlastelement(a,n);
        cout<<"altered only one element here : "<<endl;
        parray(a,n);
        



}
    return 0;
}