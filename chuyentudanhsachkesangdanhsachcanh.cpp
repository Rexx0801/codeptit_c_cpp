#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
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
				cout << i << " " << a << endl;
			}
		}
	}
}
