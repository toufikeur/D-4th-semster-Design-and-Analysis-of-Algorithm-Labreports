#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false),cin.tie(NULL)
#define ll long long
void solve()
{
    IOS;
    int cnt1 = 0,cnt2 =0,cnt3 =0,cnt4=0;
	int n;
	cin >> n;
	string s;
	cin >> s;
	//int cnt3 = 0,cnt4 =0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			cnt4++;
		}
		else if (s[i] == 'O') {
			cnt3++;
		}
	}
 
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			cnt1++;
		}
		else if (s[i] == 'O') {
			cnt2++;
		}
		int ans1 = cnt4 - cnt1;
		int ans2 = cnt3 - cnt2;
		if (ans1 !=cnt1 && ans2 != cnt2 && ans1 + ans2 != 0 && cnt1!= cnt2) {
			cout << cnt1 + cnt2 << endl;
			return ;
		}
	}
	cout << -1 << endl;
}

int main()
{
    IOS;
    solve();
}