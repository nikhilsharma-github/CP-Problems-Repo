#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void solve(vector<long long> v, long long totalSum)
{
    map<int,int> m;
    for(long long r:v)
    m[r]++;
    
    sort(v.begin(),v.end());

    int newArraySizeShouldBe = v.size();
    multiset<long long> ans;
    // ans.insert(totalSum);
    cout<<"Currently, size of new set : "<<ans.size()<<endl;
    cout<<"Size should be : "<<v.size()<<endl;

    if(v.size()==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    int firstVal=0;
    int secondVal=0;
        if(totalSum>=2)
         firstVal=totalSum/2;
        if(totalSum>=2)
         secondVal=totalSum/2;
        if(totalSum%2==1)
        secondVal+=1;


        cout<<"Possible TS first value candidate : "<<firstVal<<endl;
        cout<<"Possible TS second value candidate : "<<secondVal<<endl;

        if(m.find(firstVal)!=m.end()&&firstVal>2){
            cout<<"First TS value candidate can be inserted as it was a part of given array "<<endl;
            m[firstVal]--;
            ans.insert(firstVal);
        }    
        if(m.find(secondVal)!=m.end()&&secondVal>2&&firstVal!=secondVal){
            cout<<"Second TS value candidate can be inserted as it was a part of given array "<<endl;
            m[secondVal]--;
            ans.insert(secondVal);
        }
    
    int i=0,count=0;
    while (ans.size() < newArraySizeShouldBe&&count<newArraySizeShouldBe)
    {    

        int as=v.size();
        
        int lastValArr=v[as-1];
        v.pop_back();
        cout<<"Array last value : "<<lastValArr<<endl;

        if(lastValArr>=2)    
        int firstVal=lastValArr/2;
        if(lastValArr>=2)    
        int secondVal=lastValArr/2;

        if(lastValArr%2==1)
        secondVal+=1;


        cout<<"Possible first value : "<<firstVal<<endl;
        cout<<"Possible second value : "<<secondVal<<endl;

        if(m.find(firstVal)!=m.end()){
            cout<<"First value can be inserted as it was a part of given array "<<endl;
            m[firstVal]--;
            ans.insert(firstVal);
        }    
        if(m.find(secondVal)!=m.end()){
            cout<<"Second value can be inserted as it was a part of given array "<<endl;
            m[secondVal]--;
            ans.insert(secondVal);
        }
        count++;

    }
    cout<<"FINAL ANS : "<<endl;
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "\nTestcase : " << test + 1 << endl;
        long long n, t, totalSum = 0;
        cin >> n;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            totalSum += t;
            v.push_back(t);
        }
        solve(v, totalSum);
        // for(auto k:v)
        // cout<<k<<" ";
        // cout<<endl;
        // cout<<"totalSum : "<<totalSum<<endl;
    }
    return 0;
}