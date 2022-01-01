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
        long long numval;
        cin >> numval;

        //  Input an array

        //  int a[n];
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }
        //    cout<<"Array is : "<<endl;
        // parray(a,n);


          if(numval==0){
              cout<<"1"<<endl;
          }  
          else if(numval==0||numval==1){
              cout<<"2"<<endl;
          }
          else{

              int sumval=1;
                // cout<<sumval<<endl; 
              while(2*sumval<=numval){
                  sumval=sumval*2;
              }
                // cout<<sumval<<endl; 

              if(sumval==numval){
                  cout<<numval<<endl;
              }
                // cout<<sumval<<endl; 

                else if(numval==(2*sumval-1)){
                    cout<<numval+1<<endl;
                }
                // cout<<sumval<<endl; 

                else{
                    cout<<sumval<<endl;
                }

                // cout<<sumval<<endl; 
          }

    }
    return 0;
}