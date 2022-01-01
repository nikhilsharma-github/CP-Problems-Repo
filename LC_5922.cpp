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

int solve(vector<string> s1,vector<string> s2){

    
    map<string,int> m1;
    map<string,int> m2;
    int ans=0;
    

     for(string x:s1){
         m1[x]++;
     }
    //  for(auto it=m1.begin();it!=m1.end();it++){
    //      cout<<it->first<<" "<<it->second<<endl;
    //  }
     for(string x:s2){
         m2[x]++;
     }

    //  for(auto it=m2.begin();it!=m2.end();it++){
    //      cout<<it->first<<" "<<it->second<<endl;
    //  }

    for(string x:s1){
         if(m1[x]==m2[x]&&m1[x]==1){
            //  cout<<"One in both string : "<<m1[x]<<endl;
             ans++;
         }

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
        cout<<"Testcase : "<<test+1<<endl;
          
          vector<string> v1={"Leetcode","is","amazing","is","best","ok"};
          vector<string> v2={"amazing","Leetcode","best","is"};
                  
          cout<<solve(v1,v2)<<endl;
    }
    return 0;
}