#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    vector<int> prices(n);
    
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    sort(prices.begin(), prices.end());
    
    int lp = prices[0];
    int slp = -1;
    
    for (int i = 1; i < n; i++) {
        if (prices[i] > lp) {
            slp = prices[i];
            break;
        }
    }
    
    if (slp != -1) {
        cout << slp << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}