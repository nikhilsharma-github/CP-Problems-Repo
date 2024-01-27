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
            int n;
            cin>>n;
            string s;
            cin>>s;
            // cout<<n<<" "<<s<<endl;

            string ans="";
            
            for(int i=1;i<s.size();i=i+2){
                // cout<<s[i-1]<<" "<<s[i]<<endl;
                string k=to_string(s[i-1]-48)

                +to_string(s[i]-48);

                // cout<<"K : "<<k<<endl;
                if(k=="00")
                ans=ans+"A";
                if(k=="01")
                ans=ans+"T";
                if(k=="10")
                ans=ans+"C";
                if(k=="11")
                ans=ans+"G";
            }

            cout<<ans<<endl;


    }
    return 0;
}