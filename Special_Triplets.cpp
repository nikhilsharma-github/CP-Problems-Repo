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
        long long n, ans = 0;
        cin >> n;
        // cout << "value is : " << n << endl;

        for (long long d = n; d >= 2; d--)
        {
            // cout << "current digit to work : " << d << endl;
            if (n == d && (d % 2 != 0))
            {
                // cout << "d and n is equal and odd " << n << " and " << d << "  so only one value is possible " << endl;
                ans++;
                continue;
            }
            if (d % 2 == 0 && d > 2)
            {
                // cout<<"value is even , we will find 2C pair "<<endl;
                int div = 0;
                for (int t = 2; t <= sqrt(d); t++)
                {
                    if (d % t == 0)
                    {
                        // If divisors are equal, print only one
                        if (d / t == t)
                            div++;

                        else // Otherwise print both
                            div = div + 2;
                    }
                }
                // cout << "no of divisors of " << d << " are : " << div << endl;
                ans = ans + div;
            }
            //   cout<<"we will find for 1C pair "<<endl;
            //   cout<<"n : "<<n<<"   D : "<<d<<endl;
            //   cout<<"n/d: "<<(n/d)<<endl;
              int add=(n / d);
              
              if(n%d==0)
              {
                  add=(n/d)-1;
            //   cout<<"values are equal so no 1c pair "<<endl;
            //   add=0;
              }

            int val = add + 1;
            ans = ans + val;
            // cout<<"current ANS value : "<<ans<<endl;
        }
        // cout << " FINAL ANS:  " << endl;
        cout << ans << endl;
    }
    return 0;
}