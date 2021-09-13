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

// bool cmp(pair<string, int> &a,
//          pair<string, int> &b)
// {
//     return a.second < b.second;
// }



// Comparator function to sort pairs
// according to second value
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}
  
// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<int, int>& M)
{
  
    // Declare vector of pairs
    vector<pair<int, int> > A;
  
    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }
  
    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);
  
    // Print the sorted value
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
         
        long long n;
        cin >> n;


        //  Input an array
       int res=0,maxf=0;

        vector<int> a1;
        map<int, int> m;
        map<int, int>::iterator itr;

        // int a[n];
       
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a1.push_back(t);
            m[t]++;

                maxf=max(maxf,m[t]);
        }

        // sort(m.begin(), m.end(), cmp);
           
        vector<int> v;
        for (itr = m.begin(); itr != m.end(); ++itr)
        {
            // cout << '\t' << itr->first
            //      << '\t' << itr->second << '\n';
            v.push_back(itr->second);
        }
           
           sort(v.begin(),v.end());
        //    cout<<"Array of values is : "<<endl;

        for(int i=0;i<v.size();i++)
        {
            // cout<<v[i]<<" ";
            // res=res+v[i];
        }
        // cout<<endl;

        int lmv=v[v.size()-1];
        //   cout<<"VAL SUM :"<<res<<endl;
        //   cout<<"last max val : "<<lmv<<endl;
             
            //  if(lmv==1)
            //  {
            //      cout<<"0"<<endl;
            //      continue;
            //  }
            // cout<<res-lmv<<endl;
    
        if(n<=2)
        {
            cout<<"0"<<endl;
            continue;
        }

        else if(maxf==1)
        {
            cout<<n-2<<endl;
        }
        else{
            cout<<n-maxf<<endl;
        }
               
    }
    return 0;
}