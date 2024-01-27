// // #include <bits/stdc++.h>
// // using namespace std;
// // #define deb(x) cout << #x << "=" << x << endl

// // void solve()
// // {
// //     int n;
// //     cin >> n;
// //     string s;
// //     cin >> s;
// //     int i = 0;
// //     int j = n - 1;
// //     int ans = 0;
// //     while (j >= i)
// //     {
// //         if (s[i] == '(' and s[j] == ')')
// //         {
// //             i++;
// //             j--;
// //         }
// //         else if (s[i] == '(' and s[j] == '(')
// //         {
// //             j--;
// //             ans++;
// //         }
// //         else if (s[i] == ')' and s[j] == '(')
// //         {
// //             j--;
// //             ans++;
// //         }
// //         else if (s[i] == ')' and s[j] == ')')
// //         {
// //             ans++;
// //             i++;
// //         }
// //     }
// //     cout << ans << endl;
// // }

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     long long test = 1;
// //     cin >> test;
// //     while (test--)
// //     {
// //         // cout<<"Testcase : "<<test+1<<endl;

// //         solve();
// //         // long long n;
// //         // cin >> n;
// //         // string s;
// //         // cin >> s;

// //         // int p1 = 0;
// //         // int p2 = n - 1;
// //         // int ansval = 0;
// //         // while (p2 >= p1)
// //         // {
// //         //     if (s[p1] == '(' and s[p2] == ')')
// //         //     {
// //         //         p1++;
// //         //         p2--;
// //         //     }
// //         //     else if (s[p1] == '(' and s[p2] == '(')
// //         //     {
// //         //         p2--;
// //         //         ansval++;
// //         //     }
// //         //     else if (s[p1] == ')' and s[p2] == '(')
// //         //     {
// //         //         p2--;
// //         //         ansval++;
// //         //     }
// //         //     else if (s[p1] == ')' and s[p2] == ')')
// //         //     {
// //         //         ansval++;
// //         //         p1++;
// //         //     }
// //         // }
// //         // cout << ansval << endl;

// //         // string fp=s.substr(0,s.size()/2);
// //         // string sp=s.substr((s.size()/2));
// //         // cout<<"Given string : "<<s<<endl;
// //         // cout<<fp<<"_"<<sp<<endl;

// //         // long long  fpl=0,fpr=0,spl=0,spr=0;
// //         // long long k1=0,k2=0;
// //         // for(char c:fp){
// //         //     if(c=='(')
// //         //         fpr++;
// //         //         else
// //         //         fpl++;
// //         // }
// //         // if(fpl==0||fpr==0)
// //         // k1=max(fpl,fpr);
// //         // else
// //         // k1=min(fpl,fpr);

// //         // for(char c:sp){
// //         //     if(c=='(')
// //         //         spr++;
// //         //         else
// //         //         spl++;
// //         // }
// //         // if(spl==0||spr==0)
// //         // k2=max(spl,spr);
// //         // else
// //         // k2=min(spl,spr);

// //         // cout<<k1+k2<<endl;
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;


// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int i = 0;
//     int j = n - 1;
//     int ans = 0;
//     while (j >= i)
//     {
//         if (s[i] == '(' and s[j] == ')')
//         {
//             i++;
//             j--;
//         }
//         else if (s[i] == '(' and s[j] == '(')
//         {
//             j--;
//             ans++;
//         }
//         else if (s[i] == ')' and s[j] == '(')
//         {
//             j--;
//             ans++;
//         }
//         else if (s[i] == ')' and s[j] == ')')
//         {
//             ans++;
//             i++;
//         }
//     }
//     cout << ans << endl;
// }

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }


#include<bits/stdc++.h>
using namespace std;



void solve() {
	int n;
    cin>>n;
	string s;
	cin>>s; 
    int i = 0;int j = n-1;
    int ans = 0;
    while(j >= i){
    if(s[i] == '(' and s[j] == ')'){
        i++;j--;
    }else if(s[i] == '(' and s[j] == '('){
        j--;
        ans++;
    }
    else if(s[i] == ')' and s[j] == '('){
    j--;
    ans++;
    }else if(s[i] == ')' and s[j] == ')'){
    ans++;
    i++;
  }
}
cout<<ans<<endl;
}

int main() {

	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}