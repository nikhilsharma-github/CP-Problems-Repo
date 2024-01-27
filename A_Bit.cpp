#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1,sum=0;
    cin >> test;
    while (test--)
    {   
        string s;
        cin>>s;
        if(s=="++X"||s=="X++")
        sum++;
        else
        sum--;

    }
    cout<<sum<<endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define deb(x) cout << #x << "=" << x << endl


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     long long n,val,p=0;
//     cin>>n;
//     long long t=n;

//     while(n){
//         int d=n%10;

//         if(9-d<=4){
//             val=val+(9-d)*pow(10,p);
//         }
//         else{
//             val=val+d*pow(10,p);
//         }    
//         n=n/10;
//     }
//     cout<<t<<endl;
//     cout<<val<<endl;
//     return 0;
// }