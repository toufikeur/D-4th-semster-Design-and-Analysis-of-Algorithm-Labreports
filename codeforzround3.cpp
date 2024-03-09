#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // cout << "Enter loop number:";
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        int count = 0, a;
        // string arr[] = {3, 1, 4, 2, 8, 5, 7, 1, 4, 2, 8, 5, 7, 1, 4, 2, 8, 5, 7, 1, 4, 2, 8, 5, 7, 1, 4, 2, 8, 5, 7, 1};
        string arr = "314159265358979323846264338327";
        string ar;
        // cout << "Enter number:";
        cin >> ar;
        a = ar.length();
        for (int i = 0; i < a; i++)
        {
            if (ar[i] == arr[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << "\n";
    }
}
