#include <iostream>
#include <vector>

using namespace std;

int main() {
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
vector<int> l(n);
int min_liars = 0, max_liars = 0;
for (int i = 0; i < n; i++) {
cin >> l[i];
if (l[i] > n/2) {
min_liars = max(min_liars, l[i]-n/2);
max_liars = min(max_liars, l[i]-1);
} else {
max_liars = min(max_liars, n/2-l[i]);
min_liars = max(min_liars, -l[i]);
}
}
if (max_liars < min_liars) {
cout << "-1\n";
} else {
cout << max_liars << "\n";
}
}
return 0;
}
