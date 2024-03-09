#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans= 0, now = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 0) {
                now++;
                ans = max(ans, now);
            }
             else {
                now = 0;
            }
        }
        cout << ans<< "\n";
    }
    return 0;
}
