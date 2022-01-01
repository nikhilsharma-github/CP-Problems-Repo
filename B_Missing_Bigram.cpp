#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl


struct node
{
    int data;
    struct node *next;
    // struct node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        // prev=NULL;
    }
};
void plist(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int listSize(struct node *head)
{
    int size = 0;
    struct node *sizeptr = head;
    while (sizeptr != NULL)
    {
        size++;
        sizeptr = sizeptr->next;
    }
    return size;
}

void pmatrix(vector<vector<int>> a, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void parray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

string sol(vector<string> ip){
   
//    cout<<"GIVEN STRING IS :"<<endl;
//    for(string l: ip){
//        cout<<l<<" "<<endl;
//    }
//    cout<<endl;
   string ans="";
   int sl=ip.size()+2;

    
   if(sl==3){
       string k=ip[0];
       
       ans=ans+'a'+k[0]+k[1];
       return ans;
   }
       string temp1=ip[0];
       string temp2=ip[ip.size()-1];
          
       ans=ans+temp1[0];
   
     for(int i=1;i<ip.size();i++){

         string f=ip[i-1];
         string s=ip[i];
        //  cout<<f<<" "<<s<<endl;
            // cout<<"String first : "<<f<<" string second : "<<s<<endl;
         
            //    cout<<"Comparing middle orderes "<<endl; 
            //     cout<<" fl: "<<f[1]<<" "<<"  sf : "<<s[0]<<endl;
               if(f[1]==s[0]){
                //    cout<<"Adding only one case as both are equal "<<endl;
                   ans=ans+f[1];
               }
               else if(f[1]!=s[0]){
                //    cout<<"FOund our missig "<<endl;
                //    cout<<"Adding both the cases"<<endl;

                   ans=ans+f[1]+s[0];
                   break;
               }

        // cout<<"ANS : "<<ans<<endl;
          
     } 
    //  cout<<"Adding last char intentionally"<<endl;
        ans=ans+temp2[1];

        if(ans.size()!=sl){
            ans=ans+temp2[1];
        }

   return ans;
    








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
         string s;
         vector<string> ip;
         for(int i=0;i<n-2;i++){
             cin>>s;
             ip.push_back(s);
         }

         
          cout<<sol(ip)<<endl;
        //  for(string l:ip)
        //  cout<<l<<" ";
        //  cout<<endl;
    }
    return 0;
}