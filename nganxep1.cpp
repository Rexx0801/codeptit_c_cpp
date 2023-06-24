#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	string s;
	while (cin >> s) {
		if (s == "push") {
			int a;
			cin >> a;
			v.push_back(a);
		}
		if (s == "pop") {
			if (v.size()) {
				v.erase(v.begin()+v.size()-1);
			}
		}
		if (s == "show") {
			if (v.size()) {
				for (auto a : v) {
					cout << a << " ";
				}
			}
			else {
				cout << "empty";
			}
			cout << endl;
		}
	}
}
