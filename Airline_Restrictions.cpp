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
        long long a,b,c,d,e;
        cin >> a>>b>>c>>d>>e;
        // cout<<"A : "<<a<<"  B: "<<b<<" C: "<<c<<endl;
        // cout<<"Luggage Limit: "<<d<<endl;
        // cout<<" HB limit : "<<e<<endl;
       
          if(a>e&&b>e&&c>e){
              cout<<"NO"<<endl;
              continue;
          }
          long long hb=0,lg=0,ad=e-a,bd=e-b,cd=e-c;
           
         int arr[4];
         arr[0]=a,arr[1]=b,arr[2]=c,arr[3]=e;
         sort(arr,arr+4);
        //  cout<<"Array is : "<<endl;
        //  parray(arr,4);

            int i=0;
         for( i=3;i>=0;i--){
            if(arr[i]==e){
                break;
            }
         }
          if(i==0){
              hb=e;
          } 
          else
         hb=arr[i-1];

        // cout<<"HandBag : "<<hb<<endl;
        // cout<<"Luggage : "<<lg<<endl;

         if(hb<=e&&(a+b+c-hb)<=d)
         {
             cout<<"YES"<<endl;
         }
         else{
             cout<<"NO"<<endl;
           }
         
             

    }
    return 0;
}