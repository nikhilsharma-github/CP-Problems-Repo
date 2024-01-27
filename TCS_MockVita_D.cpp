#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

void parray(vector<long long> a,long long n){
    for(long long i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



vector<long long> nextSmallerElementOnLeft(vector<long long> arr){

    long long n=arr.size();
    vector<long long> ans(n,-1);
    stack<long long> st;
    st.push(0);
    ans[0]=-1;

    for(long long i=1;i<n;i++){

        while(st.size()!=0&&arr[st.top()]>=arr[i]){
            st.pop();
        }

        if(st.size()==0){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }

        st.push(i);
    }

    return ans;
}

vector<long long> nextSmallerElementOnRight(vector<long long> arr){
    long long n=arr.size();
    stack<long long> st;
    st.push(n-1);
    vector<long long> ans(n);
    ans[n-1]=n;

    for(long long i=n-2;i>=0;i--){
        while(st.size()!=0&&arr[st.top()]>=arr[i])
        st.pop();

        if(st.size()==0)
        ans[i]=n;
        else
        ans[i]=st.top();

        st.push(i);
    }

    return ans;
}

long long goldIngots(vector<long long> arr,long long ,long long l,long long b){
    long long n=arr.size();

    vector<long long> nsel=nextSmallerElementOnLeft(arr);
    vector<long long> nser=nextSmallerElementOnRight(arr);

    long long totalSum=0;
    for(long long ts:arr)
    totalSum+=ts;

        // cout<<" "<<totalSum<<endl;

    // cout<<"smaller left "<<endl;
    // for(long long x:nsel)
    // cout<<x<<" ";
    // cout<<endl;

    // cout<<"smaller right"<<endl;
    // for(long long x:nser)
    // cout<<x<<" ";
    // cout<<endl;

        long long maxValue=INT_MIN;

        for(long long i=0;i<n;i++){
            long long h=arr[i];
            long long w=nser[i]-nsel[i]-1;
            maxValue=max(maxValue,h*w);
        }


        long long finalAns=totalSum-maxValue;
        finalAns=finalAns*l*b;
        finalAns=finalAns%1000000007;    

    return finalAns;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        // cout<<"Testcase : "<<test+1<<endl;
        long long n,l,b;
        
        cin >> n>>l>>b;

        vector<long long> v;
        for(long long i=0;i<n;i++){
            long long t;
            cin>>t;
        
            v.push_back(t);
        }
    
       cout<< goldIngots(v,n,l,b)<<endl;

    
    return 0;
}