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
void parray(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test=1;
    cin >> test;
    while (test--)
    {
        cout<<"Testcase : "<<test+1<<endl;
        long long a,b,c;
        cin>>a>>b>>c;
        
        cout<<"A: "<<a<<" B: "<<b<<"  C: "<<c<<endl;
        long long nop= (max(a,b)-min(a,b))*2;
        cout<<"No. of people : "<<nop<<endl;


        int lowestval=(((nop)/2)+1)-((max(a,b)-min(a,b)));
        cout<<"lowestval of circle : "<<lowestval<<endl;
        if(lowestval!=1)
        {
            cout<<"Circle doesnt start with 1"<<endl;
            cout<<"-1";
            continue;
        }
        if(nop%2!=0){
            cout<<"circle cant exist , ODD VALUE"<<endl;
            //CIRCLE DOESNT EXIST
            cout<<"-1"<<endl;
            continue;
        }
        else{
            if(c>nop||c<=1)
            { 
                cout<<"Value "<<c<<" cant be available in circle "<<endl;
                //VALUE ISNT AVAILABLE
                cout<<"-1"<<endl;
                continue;
            }
            // else if()
            else{
                // FINDING DISTANCE AND ADDING IT TO C and then doing %nop for circle crossover

                int dis=(max(a,b)-min(a,b));
                 cout<<"Distance between 2 values is : "<<dis<<endl;

                 if(a>nop||b>nop||c>nop)
                 {
                     //VALUE EXCEEDED THE LIMITS
                     cout<<"Value exceeded the nop"<<endl;
                     cout<<"-1"<<endl;
                     continue;
                 }
                int ans=0;
                ans=(c+dis)%nop;
                if(ans==0)
                ans=nop;

                
                
                cout<<" ANS : "<<endl;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}




if(s.length()==3&&((s[0]=='A'&&s[1]=='A')||(s[1]=='A'&&s[2]=='A'))&&(s[0]=='L'&&s[1]=='L'&&s[2]=='L'))