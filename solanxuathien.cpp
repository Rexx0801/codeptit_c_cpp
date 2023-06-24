#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int n, k;
int arr[1005];
map<int, int>mp;
int main() {
	int t;
	cin >> t;
	while (t--) {	
		cin >> n >> k;
		mp.clear();
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			mp[arr[i]]++;
		}
		if (mp[k]) {
			cout << mp[k];
		}
		else {
			cout << -1;
		}
		cout << endl;
	}
}
