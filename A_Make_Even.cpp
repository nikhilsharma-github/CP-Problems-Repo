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
        long long n,temp=0;
        bool flag=false;
        cin >> n;
        temp=n;
        int k=0;
        //   cout<<"Number is : "<<n<<endl;
        if(n%2==0){
            cout<<"0"<<endl;
            // cout<<"Number is already even"<<endl;
            flag=true;
         continue;
        }
        else{
            while(temp>=10){
                int digit=temp%10;
                    //  cout<<"Digit is : "<<digit<<endl;

                          if(digit%2==0){
                              flag=true;
                          }               
            
            
                temp=temp/10;
            }

            if(flag==false&&temp%2!=0){
                cout<<"-1"<<endl;
            }
            else if(temp%2==0){
                cout<<"1"<<endl;
            }
            else if(flag==true){
                cout<<"2"<<endl;
            }





        }
                  
   
    }
    return 0;
}