#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

int countHillValley(vector<int> &nums)
{
    int hill = 0;
    int valley = 0;
    int n = nums.size();
    bool hf = false;
    bool vf = false;
    for (int i = 1; i <= n - 2; i++)
    {
        cout<<nums[i-1]<<" "<<nums[i]<<" "<<nums[i+1]<<endl;
        if ((nums[i - 1] < nums[i] && nums[i] < nums[i + 1]) || (nums[i - 1] > nums[i] && nums[i] > nums[i + 1]))
        {
            cout<<"No hill, No valley"<<endl;
            continue;
        }
        if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
        {
            cout<<"Hill"<<endl;
            hill++;
        }
        if (nums[i - 1] > nums[i] && nums[i] < nums[i + 1])
        {
            cout<<"Valley"<<endl;
            valley++;
        }
        else
        {
            cout<<" Hill confirm : "<<hf<<endl;
            cout<<"Valley confirm : "<<vf<<endl;
            if ((nums[i - 1] == nums[i] && nums[i] < nums[i + 1] && hf == false&&vf==false)||
            (nums[i - 1] < nums[i] && nums[i] == nums[i + 1] && hf == false&&vf==false))
            {
                cout<<"Can be a hill "<<endl;
                hf = true;
                continue;
            }
            else if ((nums[i - 1] > nums[i] && nums[i] == nums[i + 1] && vf == false&&hf==false)||
            (nums[i - 1] == nums[i] && nums[i] > nums[i + 1] && vf == false&&hf==false))
            {
                cout<<"Can be a valley "<<endl;
                vf = true;
                continue;
            }
            else if (nums[i - 1] > nums[i] && nums[i] == nums[i + 1] && hf == true)
            {
                cout<<"Last confirmed, it is a hill "<<endl;
                hf = false;
                vf = false;
                hill++;
                continue;
            }
            else if (nums[i - 1] == nums[i] && nums[i] < nums[i + 1] && vf == true)
            {
                cout<<"Last confirmed, it is a valley"<<endl;
                valley++;
                vf = false;
                hf = false;
                continue;
            }
            else{
                continue;
            }
        }
    }

    return hill + valley;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        cout<<"\nTestcase : "<<test+1<<endl;
        long long n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        // int k=countHillValley(v);
        int k=chv2(v);
        cout<<"Final ans : "<<endl;
        cout<<k<<endl;
    }
    return 0;
}