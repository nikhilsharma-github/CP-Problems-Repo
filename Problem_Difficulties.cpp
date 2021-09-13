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

        // int arr[11] = {0};
        int v[11] = {0};
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        //   cout<<"values are : "<<endl;
        //   cout<<"A : "<<a<<" b: "<<b<<" c : "<<c<<" d : "<<d<<endl;
        v[a]++;
        v[b]++;
        v[c]++;
        v[d]++;
        //NOTHING IS EQUAL  1 2 3 4
        if (a != b && b != c && c != d && d != a)
        {
            // cout << "values are different " << endl;
            cout << "2" << endl;
        }

        // ALL IS SAME  1 1 1 1
        else if (a == b && b == c && c == d && d == a)
        {
            // cout << "values are same " << endl;
            cout << "0" << endl;
        }
        else
        {
            bool flag = false;
            for (int i = 1; i <= 10; i++)
            {
                if (flag == true)
                {
                    // cout << "ans has been printed " << endl;
                    break;
                }
                if (v[i] == 2)
                {
                    // cout << " first " << i << " is 2 times " << endl;
                    for (int k = 1; k <= 10; k++)
                    {
                        if (v[k] == 1)
                        {
                            // cout << " second " << k << " is 1 times " << endl;
                            cout << "2" << endl;
                            flag = true;
                            break;
                        }
                        if (v[k] == 2 && k != i)
                        {
                            // cout << " second " << k << " is 2 times " << endl;
                            cout << "2" << endl;
                            flag = true;
                            break;
                        }
                    }
                }
                if (v[i] == 3)
                {

                    // cout << " first " << i << " is 3 times " << endl;
                    cout << "1" << endl;
                    flag = true;
                    break;
                }
                if (v[i] == 1)
                {

                    // cout << " first " << i << " is 1 times " << endl;
                    for (int k = 1; k <= 10; k++)
                    {
                        if (v[k] == 2)
                        {
                            // cout << " second " << k << " is 2 times " << endl;
                            cout << "2" << endl;
                            flag = true;
                            break;
                        }
                        if (v[k] == 3 && k != i)
                        {

                            // cout << " second " << k << " is 3 times " << endl;
                            cout << "1" << endl;
                            flag = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}