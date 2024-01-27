#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000007
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)

void solve()
{
    // 	int n;
    //     cin>>n;
    // 	string s;
    // 	cin>>s;
    //     int i = 0;int j = n-1;
    //     int ans = 0;
    //     while(j >= i){
    //     if(s[i] == '(' and s[j] == ')'){
    //         i++;j--;
    //     }else if(s[i] == '(' and s[j] == '('){
    //         j--;
    //         ans++;
    //     }
    //     else if(s[i] == ')' and s[j] == '('){
    //     j--;
    //     ans++;
    //     }else if(s[i] == ')' and s[j] == ')'){
    //     ans++;
    //     i++;
    //   }
    // }
    // cout<<ans<<endl;
}

int main()
{
    // fast_io;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        // string fp=s.substr(0,s.size()/2);
        // string sp=s.substr((s.size()/2));
        // cout<<"Given string : "<<s<<endl;
        // cout<<fp<<"_"<<sp<<endl;

        // long long  fpl=0,fpr=0,spl=0,spr=0;
        // long long k1=0,k2=0;
        // for(char c:fp){
        //     if(c=='(')
        //         fpr++;
        //         else
        //         fpl++;
        // }
        // if(fpl==0||fpr==0)
        // k1=max(fpl,fpr);
        // else
        // k1=min(fpl,fpr);

        // for(char c:sp){
        //     if(c=='(')
        //         spr++;
        //         else
        //         spl++;
        // }
        // if(spl==0||spr==0)
        // k2=max(spl,spr);
        // else
        // k2=min(spl,spr);

        // cout<<k1+k2<<endl;
        int i = 0;
        int j = n - 1;
        int ansval = 0;
        while (j >= i)
        {
            if (str[i] == '(' and str[j] == ')')
            {
                i++;
                j--;
            }
            else if (str[i] == '(' and str[j] == '(')
            {
                j--;
                ansval++;
            }
            else if (str[i] == ')' and str[j] == '(')
            {
                j--;
                ansval++;
            }
            else if (str[i] == ')' and str[j] == ')')
            {
                ansval++;
                i++;
            }
        }
        cout << ansval << endl;
    }
}