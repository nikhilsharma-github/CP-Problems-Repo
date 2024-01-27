#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

// void solve(long long problems, long long maxScore,long long currentScore, int s, int w, int us)
// {
//     if (problems == 0 && maxScore == currentScore)
//     {
//         cout << "YES" << endl;
//         cout << s << " " << w << " " << us << endl;
//         return;
//     }
//     else if(problems<0||maxScore<0){
//         return;
//     }
//      solve(problems - 1,maxScore,currentScore+3, s + 1, w, us);
//      solve(problems - 1,maxScore,currentScore-1, s, w + 1, us);
//      solve(problems - 1,maxScore,currentScore, s, w, us + 1);

// }

bool solve2(long long problems, long long maxScore, long long currentScore, int s, int w, int us)
{
    if (problems == 0 && maxScore == currentScore)
    {
        cout << "YES" << endl;
        cout << s << " " << w << " " << us << endl;
        return true;
    }
    else if (problems < 0 || maxScore < 0)
    {
        return false;
    }
    bool flag = false;

    flag = solve2(problems - 1, maxScore, currentScore + 3, s + 1, w, us);
    if (flag == true)
        return true;
    flag = solve2(problems - 1, maxScore, currentScore - 1, s, w + 1, us);
    if (flag == true)
        return true;
    flag = solve2(problems - 1, maxScore, currentScore, s, w, us + 1);
    if (flag == true)
        return true;

    return flag;
}

void solve3(long long problems, long long maxScore)
{

    // cout << "Problems : " << problems << " Max Score : " << maxScore << endl;
    long long check = 0, solved = 0, unsolved = 0, notans = 0;
    while (problems >= 0 && check != maxScore)
    {
        if (check < maxScore)
        {
            check = check + 3;
            solved++;
        }
        else if (check > maxScore)
        {
            check = check - 1;
            unsolved++;
        }
        problems--;
    }

    if (problems < 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << solved << " " << unsolved << " " << problems << endl;
    }
}

void solve4(long long problems, long long maxScore)
{

    // cout << "Problems : " << problems << " maxScore : " << maxScore << endl;
    // long long solved=(maxScore/problems);
    // solved*=3;

    if (maxScore <= 0)
    {
        cout << "YES" << endl;
        cout << 0 << " " << 0 << " " << problems << endl;
        return;
    }
    // else if (maxScore < 3)
    // {
    //     int correct = 1;
    //     int wrong = 3 - maxScore;
    //     int unsolved = problems - correct - wrong;
    //     cout << 1 << " " << 3 - maxScore << " " << unsolved << endl;
    //     return;
    // }
    else
    {

        int correct = (maxScore / 3);
        int mod = maxScore % 3;
        if (mod % 3 != 0)
            correct += 1;

        int wrong = maxScore % 3;
        if (wrong != 0)
            wrong = 3 - wrong;
        int unsolved = problems - correct - wrong;

        if (problems == correct + unsolved + wrong && (correct >= 0 && unsolved >= 0 && wrong >= 0))
        {
            cout << "YES" << endl;
            cout << correct << " " << wrong << " " << unsolved << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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
        long long problems, maxScore;
        cin >> problems >> maxScore;
        // cout << "TESTCASE : " << test + 1 << endl;
        // cout<<"problems : "<<problems<<" maxScore : "<<maxScore<<endl;

        // solve(problems, maxScore,0, 0, 0, 0);
        // bool ans=solve2(problems, maxScore,0, 0, 0, 0);
        // solve3(problems, maxScore);
        solve4(problems, maxScore);
        // if(ans==false)
        // cout<<"NO"<<endl;
    }
    return 0;
}