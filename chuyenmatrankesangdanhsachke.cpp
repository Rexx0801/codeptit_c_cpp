#include<iostream>
using namespace std;
int arr[1005][1005];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] ) {
				cout << j << " ";
			}
		}
		cout << endl;
	}
}
