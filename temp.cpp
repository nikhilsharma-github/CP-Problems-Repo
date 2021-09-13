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
void parray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout << "Testcase : " << test + 1 << endl;
        long long n;
        cin >> n;

        int row = 2 * n - 1;
        int col = 2 * n - 1;
        int numsame=n;
        int numchange=n;

        //1st Half
        int x = 0;
        for (int i = 1; i <= n - 1; i++)
        {


            for (int j = 1; j <= x; j++){
                cout << numchange<<" ";
                numchange--;
            }
            
            numsame=numchange;
            for (int j = 1; j <= 2 * n - 1 - 2 * x; j++){
                // if(i%2!=0)
                //  cout<<numsame<<" ";
                //  else
                //  cout<<"* ";
                cout << "# ";
            }
            
            for (int j = 1; j <= x; j++){

                numchange++;
                cout << numchange<<" ";
                
                // cout << "* ";
            }
            cout << endl;
            x++;
        }
        numchange=n;
        for(int i=1;i<=col;i++){
            if(i<=n/2+2){
                // if(i%2!=0)
                //  cout<<numsame<<" ";
                //  else
                //  cout<<"* ";     
             cout<<numchange<<" ";
             numchange--; 
            }
            else{
                if(i%2!=0)
                //  cout<<numsame<<" ";
                //  else
                //  cout<<"* ";
                cout<<numchange<<" ";
                numchange++;
            }
        }
        cout<<endl;

         x=n/2+2;
         numchange=n;
        for (int i = n+1; i <=row; i++)
        {

            
            x--;
            for (int j = 1; j <= x; j++){
                cout << numchange<<" ";
                numchange--;
            }
            
            numsame=numchange;
            for (int j = 1; j <= 2 * n - 1 - 2 * x; j++){
                 cout<<numsame<<" ";
                // if(i%2!=0)
                //  cout<<numsame<<" ";
                //  else
                //  cout<<"* ";
                // cout << "# ";
            }
            
            for (int j = 1; j <= x; j++){

                numchange++;
                cout << numchange<<" ";
                
                // cout << "* ";
            }
            cout << endl;
        }

    }
    return 0;
}
