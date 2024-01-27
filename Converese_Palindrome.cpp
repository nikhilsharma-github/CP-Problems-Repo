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
        // cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;
        string ip;
        cin>>ip;
        // cout<<"String "<<ip<<endl;

        int l=0,r=ip.length()-1;
        bool flag=true;
        while(l<r){
           char left=ip[l];
           char right=ip[r];
           int v=left-97;
           char compare='a'+25-v;
            // cout<<"left : "<<left<<" "<<"Right : "<<right<<" "<<"Right to compare : "<<compare<<endl;     

            if(right!=compare){
                
            // cout<<left<<"!="<<compare<<endl;     
                flag=false;
                cout<<"No"<<endl;
                break;
            }
            l++,r--;
        }

        if(flag==true)
        cout<<"Yes"<<endl;


    }
    return 0;
}