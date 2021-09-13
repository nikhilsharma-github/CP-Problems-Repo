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
        int s = 0;

        for (int i = 1; i <= n - 1; i++)
        {
            int val = n;
            for (int j = 1; j <= col; j++)
            {

                if (i == 1)
                {
                    cout << val << " ";
                }
                else
                {

                    if (j <= s)
                    {
                        if(j%2!=0)
                        cout << val << " ";
                        else
                        cout<<"# ";
                       
                        val--;
                    }
                    else if (j >= 2 * n - s)
                    {
                        val++;
                         if(j%2!=0)
                        cout << val << " ";
                        else
                        cout<<"# ";
                       
                        
                    }
                    else
                    {
                        if (i % 2 != 0)
                        {
                            cout << val << " ";
                        }
                        else
                            cout << "# ";
                    }
                }
            }
            s++;
            cout << endl;
        }
        int val1 = n;
        for (int i = 1; i <= row; i++)
        {

            if (i % 2 != 0)
            {
                cout << val1 << " ";
            }
            else
            {
                cout << "# ";
            }
            if (i <= n - 1)
                val1--;
            else
                val1++;
        }
        cout << endl;

        s = n - 2;
        for (int i = n + 1; i <= row; i++)
        {
            int val = n;
            for (int j = 1; j <= col; j++)
            {

                if (i == row)
                {
                    cout << val << " ";
                }
                else
                {

                    if (j <= s)
                    {
                         if(j%2!=0)
                        cout << val << " ";
                        else
                        cout<<"# ";

                        val--;
                    }
                    else if (j >= 2 * n - s)
                    {
                        val++;

                      if(j%2!=0)
                        cout << val << " ";
                        else
                        cout<<"# ";
                       
                    }
                    else
                    {
                        if (i % 2 != 0)
                        {
                            cout << val << " ";
                        }
                        else
                            cout << "# ";
                    }
                }
            }
            s--;
            cout << endl;
        }
    }
    return 0;
}