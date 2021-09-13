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
        long long n;
        cin >> n;

        //  Input an array

         long long asum=0,bsum=0;
         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            asum=asum+a[i];
        }
        //    cout<<"Array A is : "<<endl;
        // parray(a,n);
         int b[n-1];
        for(int i=0;i<n-1;i++){
            cin>>b[i];
            bsum=bsum+b[i];
        }
        //    cout<<"Array B is : "<<endl;
        // parray(b,n-1);

         cout<<"ASUM: "<<asum<<"    BSUM: "<<bsum<<endl;
            
           
           vector<int> v;
         for(int i=0;i<n;i++){

          int ksum=asum-a[i];
          cout<<"Sum : "<<ksum<<endl;
           
           cout<<"May be : ";
           cout<<(float)(bsum-ksum)/(n-1)<<endl;
         
           float ans1=(float)(bsum-ksum)/(n-1);
           int ans=(bsum-ksum)/(n-1);

           cout<<"FLOAT VAL : "<<ans1<<endl;
           cout<<"INT VAL : "<<ans<<endl;
           if(ans==ans1&&ans>=0&&ans1>=0){
        //    cout<<"pushed this in array: "<<ans<<endl;
           v.push_back(ans1);
           }
            


           
         }
         sort(v.begin(),v.end());
         cout<<"FINAL ANS: "<<endl;
         cout<<v[0]<<endl;
    }
    return 0;
}