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

void sol(vector<vector<int>> m, int n)
{

    pmatrix(m, n, n);
    int r = n, c = n, count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << "Current matrix : " << endl;
            // pmatrix(m, n, n);
            cout << "ROW : " << i << "   COL : " << j << endl;
            cout << "Current count: " << count << endl;
            cout << "Current element: " << m[i][j] << endl;
            if (m[i][j] < 0)
            {
                cout << "element middle " << m[i][j] << " is -ve, so reversed it" << endl;
                m[i][j] = abs(m[i][j]);
                count++;
            }

            // if (m[i - 1][j] < 0 && i > 0)
            // {

            //     cout << "element top of middle " << m[i - 1][j] << " is -ve, so reversed it" << endl;
            //     m[i - 1][j] = abs(m[i - 1][j]);
            //     count++;
            // }
            // if (m[i + 1][j] < 0 && i < n - 1)
            // {
            //     cout << "element bottom of middle " << m[i + 1][j] << " is -ve, so reversed it" << endl;

            //     m[i + 1][j] = abs(m[i + 1][j]);
            //     count++;
            // }
            // if (m[i][j - 1] < 0 && j > 0)
            // {
            //     cout << "element left  of middle " << m[i + 1][j] << " is -ve, so reversed it" << endl;
            //     count++;
            //     m[i][j - 1] = abs(m[i][j - 1]);
            // }
            // if (m[i][j + 1] < 0 && j < n - 1)
            // {
            //     cout << "element right  of middle " << m[i + 1][j] << " is -ve, so reversed it" << endl;
            //     count++;
            //     m[i][j + 1] = abs(m[i][j + 1]);
            // }
        }
    }
    cout << count << endl;
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

        vector<vector<int>> v;

        for (int i = 0; i < n; i++)
        {
            vector<int> t;
            for (int j = 0; j < n; j++)
            {
                int temp;
                cin >> temp;
                t.push_back(temp);
            }

            v.push_back(t);
        }

        sol(v, n);
    }
    return 0;
}