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
void sol(string s){
    //   char c[26];
    //   for(int i=0;i<26;i++)
    //   {
    //       c[i]=char(i+97);
    //   }
      
    // //   for(int i=0;i<26;i++)
    // //   {
    // //   cout<<c[i]<<endl;
    // //   }
         
          int diffclock=abs((int)s[0]-97);
          int diffaclock=26-diffclock;
          int count= min(diffclock,diffaclock)+1;
        //   cout<<"Count for 1st char "<<s[0]<<" is : "<<count<<endl;
         for(int p=1;p<s.length();p++)
         {

               diffclock=abs((int)s[p]-(int)s[p-1]);
            //   cout<<"1st diff type : "<<diffclock<<endl;
               diffaclock=26-diffclock;
            //   cout<<"Second diff type :"<<diffaclock<<endl;
              
            int temp=min(diffclock,diffaclock)+1;
            count=count+min(diffclock,diffaclock)+1;
            // cout<<"New count for char "<<s[p]<<" is : "<<temp<<endl;
            // cout<<"Total count: "<<count<<endl;
         }
         cout<<count<<endl;

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
       string s;
       cin>>s;
    //    cout<<"string is : "<<s<<endl;
       sol(s);
    }
    return 0;
}