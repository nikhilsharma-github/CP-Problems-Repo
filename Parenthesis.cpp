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

void stackp(stack<char> s)
{

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int test;
    // cin >> test;

    // while (test--)
    // {

        bool ans = false;
        string ip;
        getline(cin, ip);

        stack<char> s;
        vector<char> c;

        cout << "STRING IS : " << endl;
        cout << ip << endl;

        for (int i = 0; i < ip.length(); i++)
        {

            cout << "String val is : " << ip[i] << endl;

            if (ip[i] == '(')
            {
                s.push('(');
            }
            else if (ip[i] == ')')
            {

                if (s.top() == '(')
                {
                    s.pop();
                }
            }

            cout << "stack is : " << endl;
            stackp(s);

            
        }
         

         if(s.empty()){
        cout <<"0"<< endl;

         }
         else{
             cout<<"1"<<endl;
         }
    // }
    return 0;
}