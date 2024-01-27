#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(string s){ 
    vector<int> v;
    int p=0,val=0;
    for(int i=s.size()-1;i>=0;i--){
        char c=s[i];
        // cout<<"Char : "<<c<<endl;
        int digit=c-48;
        // cout<<"Extracted digit : "<<digit<<endl;
        if(c!='_'){ 
         val=val+digit*pow(10,p);
         p++;
        }
        else{
            // cout<<"DIGIT : "<<val<<endl;
            
            v.push_back(val);
            val=0;
            p=0;
        }
    }
    v.push_back(val);
    reverse(v.begin(),v.end());

        cout<<"Values in array as digits are : "<<endl;
    for(int r:v){
        cout<<r<<" ";
    }
    cout<<endl;
    // cout<<"Last digit : "<<val<<endl;
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
        string s;
        cin>>s;

        //Deleting extra spaces 
         for(int i=1;i<s.size();i++){
             if(s[i]=='_'&&s[i-1]=='_')
             s.erase(i);
         }   
        cout<<s<<endl;

         solve(s);

    }
    return 0;
}