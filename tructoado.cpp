#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int, int>a, pair<int, int>b) {
	return a.second < b.second;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<int, int>>v;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back({ a,b });
		}
		sort(v.begin(), v.end(), cmp);
		int tmp = v[0].second;
		int ans = 1;
		for (int i = 1; i < v.size(); i++) {
			if (tmp <= v[i].first) {
				tmp = v[i].second;
				ans++;
			}
		}
		cout << ans << endl;
	}
}
