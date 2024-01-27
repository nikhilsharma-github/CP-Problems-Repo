#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(string s){
    // cout<<"Given string is : "<<s<<endl;
    map<char,int> m;
  
    for(char c:s){
        m[c]++;
    }
    // cout<<"Map for string : "<<endl;
    // for(auto m:m){
    //     cout<<m.first<<" "<<m.second<<endl;
    // }
    int i=0;
     for(i=0;i<s.size();i++){
        //  cout<<"First char is : "<<s[i]<<endl;
         int firstCharFreq=m[s[i]];
        // cout<<m[s[i]]<<endl;
         if(firstCharFreq>1){
            //  cout<<"Char "<<s[i]<<" can be deleted "<<endl;
             m[s[i]]--;
         }
         else{
            //  cout<<"Here string "<<s.substr(i)<<" is done "<<endl;
             break;
         }
     }   
    // cout<<"Passed string till "<<i<<endl;
     cout<<s.substr(i)<<endl;
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
        string s;
        cin >> s;

        solve(s);
    }
    return 0;
}