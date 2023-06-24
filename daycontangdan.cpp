#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int n, arr[25];
int ans[25];
vector<pair<vector<int>, string>>a;
void dequy(int i, int cnt) {
	if (cnt > 1) {
		string x = "";
		vector<int> tmp;
		for (int j = 0; j < cnt-1; j++) {
			tmp.push_back(ans[j]);
			x += to_string(ans[j]);
			x += " ";
		}
		tmp.push_back(ans[cnt - 1]);
		x += to_string(ans[cnt - 1]);
		a.push_back({ tmp,x });
	}
	for (int j = i; j < n; j++) {
		if (cnt < 1 || arr[j] >= ans[cnt - 1]) {
			ans[cnt] = arr[j];
			dequy(j + 1, cnt + 1);
		}
	}
}
bool cmp(pair<vector<int>, string>a, pair<vector<int>, string>b) {
	return a.second <= b.second;
}
int main(){
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	dequy(0, 0);
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < a.size(); i++) {
		for (auto m : a[i].first) {
			cout << m << " ";
		}
		cout << endl;
	}
}
