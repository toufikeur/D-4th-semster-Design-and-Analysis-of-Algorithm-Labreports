#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int x = 0;
        vector<int> v1, v2;
        cin >> s;
        int p = s.length();
        for (int i = 0; i < p; i++)
        {
            if (s[i] == 'W')
            {
                v1.push_back(s[i]);
            }
            else
            {
                v2.push_back(s[i]);
            }
        }
        for (int i = 0; i < v2.size(); i++)
        {

            x = x + (v2[i] - '0');
        }
        int l = v1.size();
        int ov = p % 6;
        int mo = p / 6;
        if (p > 6 && x > 1 && l > 1)
        {
            cout << mo << "." << ov << " "
                 << "Overs"
                 << " " << x << " "
                 << "Runs"
                 << " " << l << " "
                 << "Wickts." << endl;
        }
        else if (p > 6 && x < 2 && l > 1)
        {
            cout << mo << "." << ov << " "
                 << "Overs"
                 << " " << x << " "
                 << "Run"
                 << " " << l << " "
                 << "Wickts." << endl;
        }
        else if (p > 6 && x > 1 && l < 2)
        {
            cout << mo << "." << ov << " "
                 << "Overs"
                 << " " << x << " "
                 << "Runs"
                 << " " << l << " "
                 << "Wickt." << endl;
        }
        else if (p > 6 && x < 2 && l < 2)
        {
            cout << mo << "." << ov << " "
                 << "Overs"
                 << " " << x << " "
                 << "Run"
                 << " " << l << " "
                 << "Wickt." << endl;
        }
        else if (p < 7 && x < 2 && l < 2)
        {
            cout << mo << "." << ov << " "
                 << "Over"
                 << " " << x << " "
                 << "Run"
                 << " " << l << " "
                 << "Wickt." << endl;
        }
        else if (p < 7 && x < 2 && l > 1)
        {
            cout << mo << "." << ov << " "
                 << "Over"
                 << " " << x << " "
                 << "Run"
                 << " " << l << " "
                 << "Wickts." << endl;
        }
        else if (p < 7 && x > 1 && l < 2)
        {
            cout << mo << "." << ov << " "
                 << "Over"
                 << " " << x << " "
                 << "Runs"
                 << " " << l << " "
                 << "Wickt." << endl;
        }
        else if (p < 7 && x > 1 && l > 1)
        {
            cout << mo << "." << ov << " "
                 << "Over"
                 << " " << x << " "
                 << "Runs"
                 << " " << l << " "
                 << "Wickts." << endl;
        }
    }
}