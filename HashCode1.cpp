#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl

class projects
{
public:
    string projectName;
    int numberOfDaysNeedToCompleteProject;
    int scoreAwardedforProjectCompletion;
    int projectBestBefore;
    int numberOfRoles;
    vector<pair<string, int>> projectSkillVector;

};

class contributor{
public:
string contributorName;
        int numberOfSkills;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, p;
    cin >> c >> p;
    // map<string, vector<pair<string, int>>> contributorMap;
   vector<contributor> contributorVector;
    for (int i = 1; i <= c; i++)
    {
        contributor c;   
        cin >> c.contributorName;
        cin >> c.numberOfSkills;

        vector<pair<string, int>> contributorSkillVector;
        for (int j = 1; j <= c.numberOfSkills; j++)
        {
            pair<string, int> contributorSkill;
            string skillName;
            int skillLevel;
            cin >> skillName;
            cin >> skillLevel;
            contributorSkill.first = skillName;
            contributorSkill.second = skillLevel;

            contributorSkillVector.push_back(contributorSkill);
        }

        // contributorMap[contributorName] = contributorSkillVector;
        contributorVector.push_back(c);
    }

    vector<projects> projectClassVector;
    for (int k = 1; k <= p; k++)
    {
        projects p;
        cin >> p.projectName;
        cin >> p.numberOfDaysNeedToCompleteProject;
        cin >> p.scoreAwardedforProjectCompletion;
        cin >> p.projectBestBefore;
        cin >> p.numberOfRoles;

        vector<pair<string, int>> projectSkillVector;

        for (int m = 1; m <= p.numberOfRoles; m++)
        {
            pair<string, int> projectSkill;
            string projectSkillName;
            int requiredSkillLevel;
            cin >> projectSkillName;
            cin >> requiredSkillLevel;

            projectSkill.first = projectSkillName;
            projectSkill.second = requiredSkillLevel;

            projectSkillVector.push_back(projectSkill);
        }
    }

    
    return 0;
}