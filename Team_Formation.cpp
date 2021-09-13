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
        long long n;
        cin >> n;

        string p, e;
        cin >> p;
        cin >> e;
        // cout<<p<<endl;
        // cout<<e<<endl;

        //  a0 is_nothing
        //  a2 english
        //  a3 programming
        //  a3 both
        int nothing = 0, both = 0, programming = 0, english = 0;
        for (int i = 0; i < n; i++)
        {
            // cout<<p[i]<<" "<<e[i]<<endl;
            if (e[i] == '0' && p[i] == '0')
                nothing++;
            else if (e[i] == '0' && p[i] == '1')
                english++;
            else if (e[i] == '1' && p[i] == '0')
                programming++;
            else if (p[i] == '1' && e[i] == '1')
                both++;
        }

        int zero=nothing,one=english,two=programming,three=both;
        //    cout<<"Both : "<<both<<endl;
        //    cout<<"Nothing : "<<nothing<<endl;
        //    cout<<"English: "<<english<<endl;
        //    cout<<"Programming : "<<programming<<endl;

        int res = 0;
        if (both >= nothing && nothing != 0)
        {
            res = res + both;
            both = both - nothing;
            nothing = 0;
            // cout<<"solving both and nothing "<<endl;
            // cout<<"RES : "<<res<<endl;
            // cout<<"Both: "<<both<<endl;
            // cout<<"Nothing : "<<nothing<<endl;
        }

        //    cout<<"Both : "<<both<<endl;
        //    cout<<"Nothing : "<<nothing<<endl;
        //    cout<<"English: "<<english<<endl;
        //    cout<<"Programming : "<<programming<<endl;

        //         cout<<"Solving english and programming "<<endl;
        if (english >= programming && programming != 0)
        {

            res = res + programming;
            english = english - programming;
            programming = 0;
            // cout<<"English >=programming"<<endl;
            // cout<<"RES: "<<res<<endl;
        }
        else if (programming > english && english != 0)
        {
            res = res + english;
            programming = programming - english;
            english = 0;
            //    cout<<"Programming >English"<<endl;
            //    cout<<"RES : "<<endl;
        }
        //    cout<<"Both : "<<both<<endl;
        //    cout<<"Nothing : "<<nothing<<endl;
        //    cout<<"English: "<<english<<endl;
        //    cout<<"Programming : "<<programming<<endl;

        if (both > 0 && (english > 0 || programming > 0))
        {
            // cout<<"SOlving leftover both and eng/pro"<<endl;
            if (both <= english || both <= programming)
            {
                res = res + both;
            }
        }

        //    cout<<"Both : "<<both<<endl;
        //    cout<<"Nothing : "<<nothing<<endl;
        //    cout<<"English: "<<english<<endl;
        //    cout<<"Programming : "<<programming<<endl;

        res = res + (both) / 2;
        //   cout<<res<<endl;

        //  Input an array

        //  int a[n];
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }
        //    cout<<"Array is : "<<endl;
        // parray(a,n);

        int ans = min(three,zero);


          three = three - ans;
        zero = zero - ans;

        int temp = min(one,two);
        ans = ans + temp;

        one=one - temp;
        two=two - temp;

        if (one > 0)
        {
            int temp1 = min(three, one);
            ans = ans + temp1;
            three = three - temp1;
            one = one - temp1;

            ans=ans+three/2;
        }
        else
        {

            int temp2 = min(two, three);
            ans=ans+temp2;
            three = three - temp2;
            two = two - temp2;
            ans = ans + three / 2;
        }

        cout << ans << endl;
    }
    return 0;
}