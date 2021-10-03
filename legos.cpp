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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        // cout<<"Testcase : "<<test+1<<endl;
        long long n,m;
        cin >> n>>m;

        //  Input an array

         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
           
         int b[m];
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
          

            sort(a,a+n,greater<>());
            sort(b,b+m,greater<>());
        //    cout<<"Array is : "<<endl;
        // parray(a,n);

        //    cout<<"Array is : "<<endl;
        // parray(b,m);


         int sum=0,i=0,j=0;
         while(i<n&&j<m){

            //  cout<<"A : "<<i<<"  : "<<a[i]<<endl;
            //  cout<<"B : "<<j<<"  : "<<b[j]<<endl;
 
             sum=sum+a[i]+b[j];
             
            //  cout<<"sum : "<<sum<<endl;
             i++,j++;
         }

         if(i<n){
             sum=sum+a[i];
         }
         if(j<m){
             sum=sum+b[j];

         }
         cout<<sum<<endl;
           

    }
    return 0;
}