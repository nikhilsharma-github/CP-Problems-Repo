#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
      
    //   cout<<"TESTCASE "<<test+1<<endl;


             int x,y;
             cin>>x>>y;
    //   cout<<"X : "<<x<<"    Y : "<<y<<endl;
               
            int diff=0;
             if(x>=0&&y>=0){

                 diff=y-x;
                      if(x<=y){
                       
                          cout<<(diff/2)+(diff%2)+(diff%2)<<endl;
                      
                      
                      }
                      else{
                          cout<<x-y<<endl;
                      }

             }

             else if(x<0&&y>0){

                 diff=y-x;
                          cout<<(diff/2)+(diff%2)+(diff%2)<<endl;

                 

             }

             else if(x>0&&y<0){

                 diff=y-x;

                 cout<<x-y<<endl;
             }

             else if(x<0&&y<0){
                 diff=y-x;
               
                  if(x<y){

                          cout<<(diff/2)+(diff%2)+(diff%2)<<endl;
                  }
                  else{

                      cout<<x-y<<endl;
                  }
             }





    }
    return 0;
}