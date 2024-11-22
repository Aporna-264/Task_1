#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    while (getline(cin, line))
        {
        string filtered_line = "";
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] != ' ')
            {
                filtered_line += line[i];
            }
        }
        for (int i = 0; i < filtered_line.length(); i++)
        {
            for (int j = i + 1; j < filtered_line.length(); j++)
            {
                if (filtered_line[i] > filtered_line[j])
                {
                    swap(filtered_line[i], filtered_line[j]);
                }
            }
        }
        cout << filtered_line << endl;
    }
    return 0;
}

