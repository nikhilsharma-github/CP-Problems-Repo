// // { Driver Code Starts
// //Initial Template for C++

// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends


// //User function Template for C++

// //Complete this function
// double termOfGP(int A,int B,int N)
// {
//     cout<<"A : "<<A<<" B : "<<B<<" N : "<<N<<endl;

//     double R=(double)B/A;
//     // cout<<"ratio : "<<R<<endl;
//     double ans=A*pow(R,N-1);
//     return ans;
     
// }

// // { Driver Code Starts.


// int main()
// {
//     int T; //testcases total
//     cin>>T;//input the testcases

//     for(int i=0;i<T;i++) //white testcases are not exhausted
//     {
//         int A,B;
//         cin>>A>>B; //input first and second term of gp
//         int N;
//         cin>>N; //input n
        
//         cout<<floor(termOfGP(A,B,N))<<endl;
//     }

//     return 0;
// }

//   // } Driver Code Ends


#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a=5,b=6;

    cout<<round(a/2.0)<<endl;
    a=7;
    cout<<round(a/2.0)<<endl;
    a=12;
    cout<<round(a/2.0)<<endl;
    
    return 0;
}