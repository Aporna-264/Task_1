#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
        {
        int bestID = -1, bestMarks = -1;
        string bestName, bestSection;
        for (int i = 0; i < 3; i++)
        {
            int id, totalMarks;
            string name, section;
            cin >> id >> name >> section >> totalMarks;
            if (totalMarks > bestMarks || (totalMarks == bestMarks && id < bestID))
            {
                bestID = id;
                bestMarks = totalMarks;
                bestName = name;
                bestSection = section;
            }
        }
        cout << bestID << " " << bestName << " " << bestSection << " " << bestMarks << endl;
    }
    return 0;
}

