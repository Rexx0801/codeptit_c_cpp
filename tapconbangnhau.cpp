#include<iostream>
using namespace std;
int n;
int arr[105];
int sum = 0;
int check = 0;
void dequy(int j, int s) {
	if (check)return;
	if (s == sum) {
		check = 1;
		return;
	}
	else {
		for (int i = j; i < n; i++) {
			if (s + arr[i] <= sum) {
				dequy(i + 1, s + arr[i]);
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		check = 0;
		sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		if (sum % 2 == 1) {
			cout << "NO";
		}
		else {
			sum /= 2;
			dequy(0, 0);
			if (check) {
				cout << "YES";
			}
			else {
				cout << "NO";
			}
		}
		cout << endl;
	}
}
