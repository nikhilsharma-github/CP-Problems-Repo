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
// struct mode{
//     int val=0;
// };

void printMap(map<int, int> m)
{

    for (auto itr = m.begin(); itr != m.end(); itr++)
    {

        cout << itr->first << " " << itr->second << endl;
    }
}

 
// void get2NonRepeatingNos(vector<int> arr)

// {
//     int n=arr.size();
//     /*Create map and calculate frequency of array
//        elements.*/
 
//     map<int, int> m;
//     for (int i = 0; i < n; i++) {
//         m[arr[i]]++;
//     }
//         bool flag=true;
//     for (auto& x : m) {
//         if (x.second == 1) {
//             cout<<"Inconsistent"<<endl;
//             flag=false;
//             break;
//         }
//     }
//     if(flag==true)
//     cout<<"Consistent"<<endl;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        // cout << "Testcase : " << test + 1 << endl;
        long long n, m, q, buslimit = 0;
        cin >> n >> m >> q;
        // deb(n);
        // deb(m);
        // deb(q);
        if(q>n*2)
        {
            cout << "Inconsistent" << endl;
            continue;
        }

        //creating a map
        // map<int,mode> bus;
        map<int, int> bus;
        //creating query variable

        char sign;
        int num = 0, i = 1, j = 0;
        bool flag = true;
        for (i = 1; i <= q; i++)
        {
            cin >> sign >> num;
            // cout << "QUERY : " << i << endl;

            // cout << "Map values : " << endl;
            // printMap(bus);
            // cout << "People in bus now : " << buslimit << endl;

            // cout << "New values to enter : " << endl;
            // cout << sign << " " << num << endl;

            if (flag == true)
            {

                if (buslimit > m)
                {
                    // cout << "Exceeded the bus limit : " << buslimit << " >>>>" << m << endl;
                    flag = false;
                    // break;
                }
                else if (bus[num] == 0 && sign == '-')
                {
                    // cout << num << " exited before entering, so FALSE " << endl;
                    flag = false;
                    // break;
                }
                else if (sign == '+')
                {
                     if(bus[num]>0)
                     {
                         flag=false;
                     }
                     else{

                    // cout << num << " is entering the bus " << endl;
                    bus[num]++;
                    buslimit++;
                     }
                }
                else if (bus[num] == 1 && sign == '-')
                {
                    // cout << num << " is successfully exiting " << endl;
                    buslimit--;
                    bus[num] = 0;
                }
            }
        }


// vector<int> v;
//            for (i = 1; i <= q; i++)
//         {
//             cin >> sign >> num;
//             // cout << "QUERY : " << i << endl;
        
//             v.push_back(num);
               
//         }
//         get2NonRepeatingNos(v);

        if (flag == true)
        {
            cout << "Consistent" << endl;
        }
        else
        {
            cout << "Inconsistent" << endl;
        }
    }
    return 0;
}