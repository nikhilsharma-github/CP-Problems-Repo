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
        // cout<<endl;
        // cout<<"Testcase : "<<test+1<<endl;
        long long n;
        cin >> n;

        //  Input an array
        // cout<<"N: "<<n<<endl;

         int a[n];
         int anoe=0,anod=0;
        for(int i=0;i<n;i++){
            int t=0;
            cin>>t;
            a[i]=t;
            if(t%2==0)
            anoe++;
            else
            anod++;

        }
        //    cout<<"Array is : "<<endl;
        // parray(a,n);
        
            int noe=0,nod=0;
            noe=n/2;
            nod=noe;
            if(n%2!=0)
            nod++;


        // cout<<"In array : "<<endl;
        // cout<<"odd : "<<anod<<"   even : "<<anoe<<endl;
        // cout<<"In Indexes : "<<endl;
        // cout<<"odd:"<<nod<<"    even: "<<noe<<endl;

        int ans1=0,ans2=0,fans=0;
        int minval1=min(anod,noe);
        // int maxval1=max(anod,noe);
        // if(minval1!=0){
        //     ans1=maxval1-minval1;
        // }
        // cout<<"Ans 1 : "<<ans1<<endl;
         
        int minval2=min(anoe,nod);
        // int maxval2=max(anoe,nod);
        // if(minval2!=0){
        //     ans2=maxval2-minval2;
        // }
        // cout<<"Ans 2 : "<<ans2<<endl;
          
        //   fans=ans1+ans2;
        fans=minval1+minval2;
        //   cout<<"FINAL ANS: "<<endl;
          cout<<fans<<endl;



    }
    return 0;
}