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

void solution(long long int a[],long long n,long long k){

    // parray(a,n);
    long long mvalue=a[0];
    for(int i=0;i<n;i++){
        mvalue=max(mvalue,a[i]);
        // finding max value to compare 
    }

     long long ans=0;
    
     for(int i=k-1;i<n;i++)
     {
         if(a[i]==mvalue)
         {
             ans=ans+(n-i);
             //incrementing the ans values
         }
     }

     cout<<ans<<endl;
   


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
        long long n,k;
        cin >> n>>k;

        //  Input an array

         long long int a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        //    cout<<"Array is : "<<endl;
        // parray(a,n);
         
         solution(a,n,k);

    }
    return 0;
}