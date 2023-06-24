#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; i++) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		string token;
		vector<long long >v;
		while (ss >> token) {
			v.push_back(stoll(token));
		}
		for (auto a : v) {
			if (a > i) {
				arr[i][a] = 1;
				arr[a][i] = 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
