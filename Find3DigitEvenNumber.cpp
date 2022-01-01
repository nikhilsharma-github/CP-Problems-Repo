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

 vector<int> findEvenNumbers(vector<int>& digits) {
        
             vector<int> ans;
            for(int i=0;i<digits.size()-1;i++){

                 int a=digits[i];
                 int b=digits[i+1];
                 int c=digits[i+2];

                 if(a!=0&&b%2==0){
                     ans.push_back(b*100+c*10+a);
                 }
                 else if(b!=0&&a%2==0){
                     ans.push_back(b*100+c*10+a);
                 }
                 else if(a!=0&&c%2==0){
                     ans.push_back(a*100+b*10+c);
                 }
                 
                 
                 else if(b!=0&&c%2==0){
                     ans.push_back(a*100+b*10+c);
                 }
                 
                 
                else if(c!=0&&a%2==0){
                     ans.push_back(a*100+b*10+c);
                 }
                 else if(c!=0&&b%2==0){
                     ans.push_back(a*100+b*10+c);
                 }
                 
            }

            sort(ans.begin(),ans.end());

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
        long long n;
        cin >> n;
         
         vector<int> v;
         for(int i=0;i<n;i++){
               int t;
               cin>>t;
             v.push_back(t);
         }
         vector<int> ans=findEvenNumbers(v);


    }
    return 0;
}