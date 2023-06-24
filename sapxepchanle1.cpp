#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[100005];
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	vector<int> chan, le;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			le.push_back(arr[i]);
		}
		else {
			chan.push_back(arr[i]);
		}
	}
	sort(le.begin(), le.end());
	sort(chan.begin(), chan.end(), cmp);
	int i = 0;
	int j = 0;
	int cnt = 0;
	while (i < le.size() && j < chan.size()) {
		if (cnt % 2 == 0) {
			cout << le[i] << " ";
			i++;
			cnt++;
		}
		else {
			cout << chan[j] << " ";
			j++;
			cnt++;
		}
	}
	for (int j = i; j < le.size(); j++) {
		cout << le[j] << " ";
	}
	for (int i = j; i < chan.size(); i++) {
		cout << chan[i] << " ";
	}
}
