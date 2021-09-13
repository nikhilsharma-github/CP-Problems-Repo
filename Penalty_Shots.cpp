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
        // cout << "Testcase : " << test + 1 << endl;
        

        //  Input an array

        int a[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        // cout << "Array is : " << endl;
        // parray(a, n);

        int l = 0, r = 0;
        for (int i = 1; i <= 10; i++)
        {
            if (a[i-1] == 1)
            {

                if (i % 2 != 0)
                    l++;
                else
                    r++;
            }
        }

        if(l==r)
        cout<<"0"<<endl;
        else if(l>r)
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;
    }
    return 0;
}
