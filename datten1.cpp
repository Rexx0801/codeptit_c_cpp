#include<iostream>
#include<set>
using namespace std;
string str[45];
int n, m;
int z[45];
int ok = 1;
void sinh() {
	int j = m - 1;
	int i = 0;
	while (z[j] == n - i && j >= 0) {
		j--;
		i++;
	}
	if (j == -1) {
		ok = 0;
	}
	else {
		z[j] += 1;
		int tmp = z[j] + 1;
		for (int i = j + 1; i < m; i++) {
			z[i] = tmp;
			tmp++;
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		z[i] = i + 1;
	}
	string s[45];
	set<string>a;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		a.insert(s[i]);
	}
	int cnt = 0;
	for (auto v : a) {
		str[cnt] = v;
		cnt++;
	}
	n = cnt;
	while (ok) {
		for (int i = 0; i < m; i++) {
			cout << str[z[i] - 1] << " ";
		}
		cout << endl;
		sinh();
	}
}
