
#include <bits/stdc++.h>
using namespace std;

struct person
{
    int no_of_skills;
    char name[20];
    vector<pair<char, int>> skill_info(no_of_skills);
};
int main()
{
    int c, p;
    cin >> c >> p;

    struct person pr[c];

    for (int i = 0; i < c; i++)
    {
        cin >> &pr[i].name >> &pr[i].no_of_skills;

        for (int j = 0; j < no_of_skills; j++)
        {
            char tm;
            int tp;
            cin >> tm >> tp;
            skill_info[j].push_back(make_pair(tm, tp));
        }
    }
    return 0;
}