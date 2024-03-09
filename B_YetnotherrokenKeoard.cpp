#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string s;
    cin >> s;
	stack<pair<int,char>> s1;
	stack<pair<int,char>> s2;
	
	for(int i = 0; i < s.length(); i++) {
		char ch = s[i];
		if(ch == 'B') {
			if(!s2.empty()) s2.pop();
			continue;
		}
		else if(ch == 'b') {
			if(!s1.empty()) s1.pop();
			continue;
		}
		else {
			if(ch >= 'a' && ch <= 'z') {
				s1.push(make_pair(i, s[i]));
			}
			else{
				s2.push(make_pair(i, s[i]));
			}
		}
	}
	vector<pair<int,char>> v;
	while(!s1.empty()) {
		v.push_back(s1.top());
		s1.pop();
	}
	while(!s2.empty()) {
		v.push_back(s2.top());
		s2.pop();
	}
 
	sort(v.begin(), v.end());
	string res = "";
	for(auto it:v) res += it.second;
	cout << res;
    cout << endl;
}
}