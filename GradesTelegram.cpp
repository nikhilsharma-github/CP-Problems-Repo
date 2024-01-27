#include <bits/stdc++h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

// Using a class to demonstrate how the students data will be stored
class student
{
public:
    int rollNo;
    string name;
    vector<int> scores;
};

void displayObject(vector<student> s)
{
    // printing our Students
    for (int i = 0; i < s.size(); i++)
    {

        if (i == 0)
            cout << "Student\t\t\t"
                 << "HW1 HW2 HW3 HW4 Test1 Test2 Final" << endl;

        cout << s[i].rollNo << "\t" << s[i].name << "\t\t";

        vector<int> k = s[i].scores;

        for (int v : k)
        {

            if (v == -1)
            {
                cout << "X  ";
                continue;
            }

            cout << v << "  ";
        }

        cout << endl;
    }
}

void averageScore(vector<student> ip)
{
    cout << "---- Average Student Scores ----" << endl;

    vector<float> ans;
    for (int c = 0; c < 6; c++)
    {
        float avgVal = 0;
        for (int r = 0; r < 20; r++)
        {
            cout << "Score of " << ip[r].name << " at : " << ip[r].scores[c] << endl;
            avgVal += ip[r].scores[c];
        }

        avgVal /= 20;
        ans.push_back(avgVal);
    
    }

    cout << "HW1 HW2 HW3 HW4 Test1 Test2 " << endl;

    for(int i=0;i<6;i++)
    cout<<ans[i]<<"  ";

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<student> ip;

    for (int i = 0; i < 20; i++)
    {
        student obj;
        int rollNo;
        cin >> rollNo;
        string s;
        cin >> s;

        vector<int> score;
        for (int i = 0; i < 7; i++)
        {
            if (i == 6)
            {
                score[i]=(-1);
                continue;
            }
            // cout << "Enter Score " << i + 1 << endl;
            int t;
            cin >> t;
            score[i]=(t);
        }

        obj.rollNo = rollNo;
        obj.name = s;
        obj.scores = score;

        ip.push_back(obj);
    }

    displayObject(ip);

    cout << "--------------------------------------------------------------" << endl;

    while (true)
    {
        cout << "1 - Calculate Average Scores " << endl;
        cout << "2 - Calculate Min/Max Scores " << endl;
        cout << "3 - Calculate Current Average Of a Student " << endl;
        cout << "4 - Find Min Final Test Score for a 80(B) " << endl;
        cout << "0 - Exit Program" << endl;
        int ipVal;
        cin >> ipVal;
        cout << "Your Selection: " << ipVal << endl;

        if (ipVal == 1)
        {
            averageScore(ip);
            continue;
        }
        else if (ipVal == 2)
        {
            // cout<<minMaxScore(ip)<<endl;
            continue;
        }
        else if (ipVal == 3)
        {
            // cout<<currentAvg(ip)<<endl;
            continue;
        }
        else if (ipVal == 4)
        {
            // cout<<minFinalTest(ip)<<endl;
            continue;
        }
        else if (ipVal == 0)
        {
            cout << "EXIT" << endl;
            break;
        }
        else
        {
            cout << "Wrong Input. Provide Input from the above menu only" << endl;
            break;
        }
    }

    return 0;
}