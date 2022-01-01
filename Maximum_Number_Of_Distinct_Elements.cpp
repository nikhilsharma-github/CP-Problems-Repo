#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << "=" << x << endl


void parrayPrint(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

bool comparatorfunc(pair<long long,long long> &pairval1,pair<long long,long long> &pairval2 ){


    return pairval1.second<pairval2.second;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long testcaseVal=1;
    cin >> testcaseVal;
    while (testcaseVal--)
    {
        // cout<<"Testcase : "<<testcaseVal+1<<endl;
        long long n,tempval;
        cin >> n;
 
        //  Input an array
               vector<pair<long long ,long long>> arrval;
           for(int i=0;i<n;i++){
               cin>>tempval;

               arrval.push_back((make_pair(tempval,i)));
        }


       long long count=0;

       sort(arrval.begin(),arrval.end());


       for(int i=0;i<n;i++){
           
           if(arrval[i].first>count){
               arrval[i].first=count;
               count=count+1;
           }

           else if(arrval[i].first==count){

               arrval[i].first=count;
           }


       }


         sort(arrval.begin(),arrval.end(),comparatorfunc);       


         for(int i=0;i<n;i++){
             cout<<arrval[i].first<<" ";
         }  

         cout<<endl;
    }
    return 0;
}