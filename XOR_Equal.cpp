#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


// struct node
// {
//     long long data;
//     struct node *next;
//     // struct node *prev;
//     node(long long value)
//     {
//         data = value;
//         next = NULL;
//         // prev=NULL;
//     }
// };
// void plist(node *temp)
// {
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// long long listSize(struct node *head)
// {
//     long long size = 0;
//     struct node *sizeptr = head;
//     while (sizeptr != NULL)
//     {
//         size++;
//         sizeptr = sizeptr->next;
//     }
//     return size;
// }

// void pmatrix(vector<vector<long long>> a, long long r, long long c)
// {
//     for (long long i = 0; i < r; i++)
//     {
//         for (long long j = 0; j < c; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// void parray(long long a[],long long n){
//     for(long long i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

void sol(long long n,long long k){



  long long maxval=0,mincount=INT_MAX;
  unordered_map<long long,long long> con;
  unordered_map<long long,long long> cox;
  vector<long long> values;
  long long temp=0;
  for(long long i=0;i<n;i++){
      cin>>temp;
      con[temp]++;
      
      long long xorval=(temp)^(k);
      cox[xorval]++;

      values.push_back(temp);
    //   values.push_back(xorval);
 }
   if(n==1){
       cout<<1<<" "<<0<<endl;
       return;
   }

   for(auto it:con){
       if(it.second==n){
           maxval=n;
           break;
       }
       if(it.second>=maxval){
           maxval=it.second;
       }


   }
   if(k==0){
    //   cout<<"ismein aaya u"<<endl;
      long long maxv=INT_MIN;
     for(auto it:con){
          maxv=max(it.second,maxv);
     }   
     cout<<maxv<<" "<<0<<endl;
     return;
   }
//   cout<<"Count of Values MAP : "<<endl;
//   for(auto it:con){
//       cout<<it.first<<"  "<<it.second<<endl;
//   }
//   cout<<"XOR value MAP : "<<endl;
//   for(auto it:cox){
//       cout<<it.first<<"  "<<it.second<<endl;
//   }

  
    for(long long i=0;i<n;i++){
       
       long long mv1= (con[values[i]]+cox[values[i]]);
       long long mv2= cox[values[i]];

        if(k==0&&mv1>=maxval){
            maxval=mv1;
            mincount=0;

        }
      else if((long long int)(mv1>=maxval)&&(mv2<=mincount)){
            maxval=mv1;
            mincount=mv2;
        }

    }
    cout<<maxval<<" "<<mincount<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        // cout<<0<<" fds "<<4343<<" hello 00 00"<< endl;
        // cout<<"Testcase : "<<test+1<<endl;
        long long n,k;
        cin >> n>>k;
        // cout<<"n : "<<n<<" K : "<<k<<endl;
        sol(n,k);

          
    }
    return 0;
}