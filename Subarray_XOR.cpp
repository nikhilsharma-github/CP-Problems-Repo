#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

#define MOD 998244353;

vector<string> gss(string s){
   
    // if(s.length()==0){
    //     vector<string> ans;
    //     ans.push_back("");
    //     return ans;
    // }

    // char firstChar=s[0];
    // string restOfString=s.substr(1);
    // vector<string> returnedString=gss(restOfString);
    // vector<string> finalAns;

    // for(string v:returnedString){
    //     finalAns.push_back(""+v);
    // }
    // for(string v:returnedString){
    //     finalAns.push_back(firstChar+v);
    // }

    // return finalAns;

    vector<string> finalAns;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<=s.length()-i;j++){

                finalAns.push_back(s.substr(i,j));
        }
    }

    return finalAns;

}
long long btd(string str){

  long long ans=0;
  int power=0;

  for(int i=str.size()-1;i>=0;i--){
      
      int digit=0;
      if(str[i]=='1')
      digit=1;
      else
      digit=0;

    //   cout<<"Digit is : "<<digit<<endl;
      ans=ans+pow(2,power)*digit;
      power++;

  } 

  return ans;


}

unordered_map <string,long long int> mapStr;

void xorCalculate(vector<string> substrings,long long &totalAns){

    if(substrings.size()<=0){
        return;
    }

    string lastString=substrings[substrings.size()-1];

    if(lastString.size()==0||lastString=="")
    return;

    int val=0;
    if(mapStr.find(lastString)!=mapStr.end()){
        // cout<<"Found using map"<<endl;
        auto it=mapStr.find(lastString);
        val=it->second;
    } 
    else{
        // cout<<"Found manually "<<endl;
    // cout<<"Binary string is : "<<lastString<<endl;
         long long binaryToDecimal=btd(lastString); 
        // cout<<"Its decimal is : "<<binaryToDecimal<<endl;
        val=binaryToDecimal;
        mapStr[lastString]=val;
    }
    
    // cout<<"Calculation "<<endl;
    totalAns=totalAns^val;
    substrings.pop_back();
    xorCalculate(substrings,totalAns); 



}

void solve(long long n,string bs){
    // vector<string> substrings=substringsOfBs(bs);
    vector<string> substrings=gss(bs);

// cout<<"andha h kya bsdk"<<endl;
//     for(string v:substrings)
//     cout<<v<<endl;
    long long ans=0;
    xorCalculate(substrings,ans);
    ans=ans%MOD;
    cout<<ans<<endl;


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
        long long n;
        cin >> n;
        string bs;
        cin>>bs;

        solve(n,bs);
    }
    return 0;
}