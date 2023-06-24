#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
int arr[100005];
vector<pair<int, pair<int,int> > >v;
bool cmp(pair<int, pair<int,int> > a, pair<int, pair<int,int> > b) {
	if (a.second.first == b.second.first) {
		return a.second.second < b.second.second;
	}
	return a.second.first < b.second.first;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		v.clear();
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			v.push_back({ arr[i],{abs(m - arr[i]),i} });
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < n; i++) {
			cout << v[i].first << " ";
		}
		cout << endl;
	}
}
