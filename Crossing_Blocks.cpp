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
    int n = 0;
    struct node *sizeptr = head;
    while (sizeptr != NULL)
    {
        n++;
        sizeptr = sizeptr->next;
    }
    return n;
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

int sol(int a[], int n)
{



    int msf = a[0],jump=0;
    for (int i = 1; i < n; i++)
    {
      if(a[i]>msf)
      {
          cout<<"-1"<<endl;
          return 0;
      }   

    }

     int max_from_right =  a[n-1];
 
    /* Rightmost element is always leader */
    
     
    for (int i = n-2; i >= 0; i--)
    {
        if (max_from_right <= a[i])
        {          
            max_from_right = a[i];
            // cout<<"max_from right : "<<max_from_right<<endl;
           jump++;
        }
    }
    

    
    // cout<<"Jumps : "<<jump<<endl;
    cout<<jump<<endl;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        long long n;
        cin >> n;

        //  Input an array

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // cout << "Array is : " << endl;
        // parray(a, n);

        sol(a, n);
    }
    return 0;
}