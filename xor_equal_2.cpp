#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

// struct node
// {
//     long long data;
//     struct node *next;
//     // struct node *prev;
//     node(long long value)
//     {
//         data = value;
//         next = NULL;
//         // prev=NULL;
//     }
// };
// void plist(node *temp)
// {
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// long long listSize(struct node *head)
// {
//     long long size = 0;
//     struct node *sizeptr = head;
//     while (sizeptr != NULL)
//     {
//         size++;
//         sizeptr = sizeptr->next;
//     }
//     return size;
// }

// void pmatrix(vector<vector<long long>> a, long long r, long long c)
// {
//     for (long long i = 0; i < r; i++)
//     {
//         for (long long j = 0; j < c; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// void parray(long long a[],long long n){
//     for(long long i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

void sol(long long n, long long x)
{

    long long v[n];
    long long numb = 0, opr = 1e18;

    for (long long i = 0; i < n; i++)
        cin >> v[i];

    unordered_map<long long, long long> con, cox;

    if (n == 1)
    {
        cout << 1 << " " << 0 << endl;
        return;
    }
    for (long long i = 0; i < n; i++)
    {
        con[v[i]]++;
    }

    for (long long i = 0; i < n; i++)
    {
        long long xxorVal = x ^ v[i];
        cox[xxorVal]++;
    }

    for (long long i = 0; i < n; i++)
    {
        if ((con[v[i]] + cox[v[i]] >= numb) && (opr >= cox[v[i]]))
        {
            numb = con[v[i]] + cox[v[i]];
            opr = cox[v[i]];
        }
    }
    // cout << numb << " " << opr << endl;
}

void sol2(long long n, long long x)
{
    map<long, long> cox;

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        cox[temp]++;
    }
    long long ans = 0;
    long long count = 0;
    if (x == 0)
    {

        for (auto itr = cox.begin(); itr != cox.end(); itr++)
        {
            long long val = itr->second;
            ans = max(ans, val);
        }
        cout << ans << " 0" << endl;
    }
    else
    {
        for (auto itr = cox.begin(); itr != cox.end(); itr++)
        {
            long long k = (itr->first) ^ (x);

            if (cox.find(k) != cox.end())
            {
                auto t = cox.find(k);
                long long val1 = t->second;
                long long val2 = itr->second;

                if ((val1 + val2) > ans)
                {
                    ans = (val1 + val2);
                    count = val2;
                }
                else if ((val1 + val2) == ans)
                {

                    count = min(count, val2);
                }
            }

            long long val2 = itr->second;
            if ((val2) > ans)
            {
                ans = val2;
                count = 0;
            }
            else if (val2 == ans)
            {
                count = 0;
            }
        }
        cout << ans << " " << count << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout<<0<<" fds "<<4343<<" hello 00 00"<< endl;
        // cout<<"Testcase : "<<test+1<<endl;
        long long n, k;
        cin >> n >> k;
        // cout<<"n : "<<n<<" K : "<<k<<endl;
        // sol(n,k);
        sol2(n, k);
    }
    return 0;
}