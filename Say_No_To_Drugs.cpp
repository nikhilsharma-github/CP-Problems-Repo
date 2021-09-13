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
        long long n,k,l;
        cin >> n>>k>>l;

        //  Input an array

         int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // cout<<"N: "<<n<<" K : "<<k<<" L :"<<l<<"  "<<endl;
        //    cout<<"Array is : "<<endl;
        // parray(a,n);

          int mvalue=a[0];
        for(int i=0;i<n-1;i++){
            mvalue=max(mvalue,a[i]);
        }

        long long fv=a[n-1];
            // cout<<"max value : "<<mvalue<<endl;
            // cout<<"Freind value : "<<fv<<endl;
           if(fv<mvalue&&k<1){
            //    cout<<"negative wont help "<<endl;
               cout<<"No"<<endl;
               continue;
           }
           else{
               int d=1;
               for(;d<l;d++){
                   fv=fv+k;
                //    cout<<"d : "<<d<<endl;
                //    cout<<"FV : "<<fv<<endl;
                   if(fv>mvalue){
                       cout<<"Yes"<<endl;
                       break;
                   }

               }
                  if(fv==mvalue||d==l){
                      cout<<"No"<<endl;
                  }
           }
        


    }
    return 0;
}