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

long long dr(long long n,long long ntemp, long long d, long long pow)
{

    // cout << "found " << d << " at position " << (pow/10)+1 <<" for power "<<pow<< endl;
    long long part=n%pow;
    // cout<<"last digit part of given no: "<<part<<endl;


    return pow-part;
        return 0;
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
        // cout << "TEST CASE : " << test + 1 << endl;
        long long n, d, ntemp, sum = 0,dectemp=0;
        cin >> n >> d;
        // cout<<" N: "<<n<<"  D : "<<d<<endl;
        // ntemp = n;
        // dectemp=n;
        

        // OLDCODE 
        //  int lastcheck=-1;
        // bool addition=true;
        // int pow = 1;
        // while (ntemp)
        // {

        //     int lastdigit = ntemp % 10;

        //         // cout<<"Currently n is : "<<n<<endl;
        //         int lastcheck=n%10;
        //     if (lastdigit == d)
        //     {
        //         addition=false;

        //         // cout<<"Last digit is : "<<d<<endl;
        //          int pval=dr(n,ntemp,d,pow);
                  
        //           dectemp=dectemp+pval;
        //           n=dectemp;
        //           if(lastcheck==d&&n>10){
        //         //    cout<<"Last digit was "<<d<<" so incremented result "<<endl;
        //           pval++;
        //           }


        //         //  cout<<"ADD "<<pval<<" to remove "<<d<<endl;
        //          sum = sum + pval;
        //         //  cout<<"SUM VAL at Present : "<<sum<<endl;
        //         // cout<<"Currently n is : "<<n<<endl;
        //     }
        //     ntemp = ntemp / 10;

        //     pow = pow * 10;
        // }

        // if(addition==true){
        // cout<<"0"<<endl;
        // }
        // else{

        //     // cout<<"FINal ans : "<<sum<<endl;
        //     cout<<sum<<endl;
        // }



            //  NEWCODE 


    //    intialization of variables 
            int newval=n;
            int remainder=0;
            int finalAns=0;
            int carry=0;


            while(newval>0){

                    // getting remainder 
                remainder=newval%10;
                newval=newval/10;

                carry++;

                if(remainder==d){

                             //    long long int val1=newval*pow(10,carry);
                            //   long long int val2=(remainder+1)*pow(10,carry-1);
                            //   newval=val1+val2;

                            

                              newval=newval*pow(10,carry)+(remainder+1)*pow(10,carry-1);
                  
                              finalAns=newval-n;
                              carry=0;
                }
            }
            // printing final ans
            cout<<finalAns<<endl;

            // end of code 

    }
    return 0;
}