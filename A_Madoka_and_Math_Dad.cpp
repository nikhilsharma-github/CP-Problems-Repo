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
        // cout<<endl;
        // cout << "Testcase : " << test + 1 << endl;
        long long n,k=0,strsize=0;
        cin >> n;
        // cout<<"Number  : "<<n<<endl;
        string ans;
        long long counter = 0;
        while (counter < n)
        {
            if (k == 0){
                ans = ans + "1";
                counter=counter+1;
            }
            else{
                ans = ans + "2";
                counter=counter+2;
            }
            k = 1 - k;
            
        }
        strsize=ans.length();

        // cout<<"Counter : "<<counter<<endl;
        // cout<<"String length : "<<strsize<<endl;
        // cout<<"first char : "<<ans[0]<<"  last char : "<<ans[strsize-1]<<endl;
        if(counter>n){
            ans=ans.substr(1);
            cout<<ans<<endl;
        }
        else if(ans[0]!=ans[strsize-1])
        {

            int l=0,r=strsize-1;

            while(l<r){
                char c=ans[l];
                ans[l]=ans[r];
                ans[r]=c;
                l++,r--;
            }    

            // cout<<"String is reversed"<<endl;

            cout<<ans<<endl;

        }
        else{
        cout<<ans<<endl;
        }
    }
    return 0;
}