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

vector<int> sol(vector<int> ip)
{

    int f = 0, s = 0, l = 0;
    f = ip[0];

    for (int i = 1; i <= 5; i++)
    {
        bool flag = false;
        for (int j = i; j <= 5; j++)
        {
            // cout << "s : " << ip[i] << " l :" << ip[j] << endl;

            if (ip[i] + ip[j] == ip[6] - ip[0])
            {
                // cout << "Found our s and l for sum : " << ip[6] - ip[1] << endl;
                s = ip[i], l = ip[j];
                flag = true;
                break;
            }
        }
        if (flag == true)
            break;
    }

                // cout << "Found our s and l for sum : " << ip[6] - ip[1] << endl;
    vector<int> ans;
    ans.push_back(f);
    ans.push_back(s);
    ans.push_back(l);
    return ans;
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

        int t = 0;
        vector<int> ip;
        for (int i = 0; i < 7; i++)
        {
            cin >> t;
            ip.push_back(t);
        }

        // for (int r : ip)
        //     cout << r << endl;

        vector<int> ans = sol(ip);

        for (int k : ans)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}